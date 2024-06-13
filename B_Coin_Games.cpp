#include <bits/stdc++.h>
#define ll long long int
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        bool is_01 = false;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] > s[i - 1])
            {
                is_01 = true;
            }
        }
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char temp = s[i];
            while (i + 1 < s.size() && s[i + 1] == temp)
            {
                i++;
            }
            count++;
        }
        if (is_01)
            cout << count - 1 << "\n";
        else
            cout << count << "\n";
    }

    return 0;
}