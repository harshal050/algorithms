#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, w, idx;

    Edge(int _u, int _v, int _w, int _idx) : u(_u), v(_v), w(_w), idx(_idx) {}

    bool operator<(const Edge &other) const {
        return w < other.w;
    }
};

vector<int> parent;
vector<int> rank;

// Find operation in disjoint-set union (DSU) data structure
int find(int u) {
    if (parent[u] == u)
        return u;
    return parent[u] = find(parent[u]);
}

// Union operation in disjoint-set union (DSU) data structure
void union_sets(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        if (rank[u] < rank[v])
            swap(u, v);
        parent[v] = u;
        if (rank[u] == rank[v])
            rank[u]++;
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<Edge> edges;
    parent.resize(n + 1);
    rank.resize(n + 1);

    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
        rank[i] = 0;
    }

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.emplace_back(u, v, w, i + 1);
    }

    sort(edges.begin(), edges.end());

    int keptEdges = 0;
    vector<int> ansEdges;

    for (const Edge &edge : edges) {
        if (find(edge.u) != find(edge.v)) {
            union_sets(edge.u, edge.v);
            keptEdges++;
            ansEdges.push_back(edge.idx);
            if (keptEdges == n - 1 - k)
                break;
        }
    }

    cout << k << endl;
    for (int edgeIdx : ansEdges) {
        cout << edgeIdx << " ";
    }
    cout << endl;

    return 0;
}
