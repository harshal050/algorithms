                /*  यदा यदा हि धर्मस्य ग्लानिर्भवति भारत।
                    अभ्युत्थानमधर्मस्य तदात्मानं सृजाम्यहम्
                    परित्राणाय साधूनां विनाशाय च दुष्कृताम् ।
                    धर्मसंस्थापनार्थाय सम्भवायुगे युगे  */

                #include <bits/stdc++.h>
                using namespace std;

                /**********************   Template Start  *************************/

                #define endl "\n"
                // #define int                                     long long
                #define vi vector<int>
                #define vb vector<bool>
                #define vvi vector<vector<int>>
                #define vvb vector<vector<bool>>
                #define pb push_back
                #define pob pop_back
                #define rep(x, i, y) for (int i = x; i < y; i++)
                #define all(a) a.begin(), a.end()
                #define mapi map<int, int>
                #define seti set<int>
                #define umapi unordered_map<int, int>
                #define useti unordered_set<int>
                #define mapc map<char, int>
                #define setc set<char>
                #define umapc unordered_map<char, int>
                #define usetc unordered_set<char>
                #define pq priority_queue<int>
                #define pqG priority_queue<int, vector<int>, greater<int>>
                #define ff first
                #define ss second
                #define all(a) a.begin(), a.end()
                #define srt(a) sort(a.begin(), a.end())
                #define srtrev(a) sort(a.rbegin(), a.rend())
                #define prdouble(x) cout << fixed << setprecision(10) << x
                #define c(x)               \
                    {                      \
                        cout << x << endl; \
                    }

                /**************************/

                #define int long long int
                #define llu unsigned long long
                // #define endl '\n'

                /**************************/
                // const int aaa[100000+1];
                const int NN = 2 * 1e5;
                vi aaa(NN, 0);

                #define f(i, n) for (int i = 0; i < n; i++)
                #define f(j, n) for (int j = 0; j < n; j++)
                #define rf(i, n) for (int i = n - 1; i >= 0; i--)
                #define f1(i, n) for (int i = 1; i <= n; i++)
                #define rf1(i, n) for (int i = n; i >= 1; i--)

                /**************************/

                void revstr(string &str)
                {
                    int n = str.length();
                    for (int i = 0; i < n / 2; i++)
                        swap(str[i], str[n - i - 1]);
                }

                /**************************/

                #define con continue
                #define S second
                #define F first
                #define pb push_back
                #define pob pop_back
                #define el endl
                #define yes cout << "YES" << endl
                #define no cout << "NO" << endl
                #define mkn \
                    int n;  \
                    cin >> n;
                #define mkx \
                    int x;  \
                    cin >> x;
                #define mks   \
                    string s; \
                    cin >> s;
                #define mkab  \
                    int a, b; \
                    cin >> a >> b;
                #define mkabc    \
                    int a, b, c; \
                    cin >> a >> b >> c;
                #define mkabcd      \
                    int a, b, c, d; \
                    cin >> a >> b >> c >> d;

                // /-----------------------------------------/

                string dc(int n)
                {
                    string v = to_string(n);
                    return v;
                }

                // /-----------------------------------------/

                const int M = 100000000;
                const int mod = 998244353;

                const int prime_N = 1e6;
                vb isPrime(prime_N, false);
                vi lp(prime_N, 0);
                vi hp(prime_N, 0);

                const int fact_N = 1e6;
                vi fact(fact_N);

                void __print(int x) { cerr << x; }
                void __print(double x) { cerr << x; }
                void __print(long double x) { cerr << x; }
                void __print(char x) { cerr << '\'' << x << '\''; }
                void __print(const char *x) { cerr << '\"' << x << '\"'; }
                void __print(const string &x) { cerr << '\"' << x << '\"'; }
                void __print(bool x) { cerr << (x ? "True" : "False"); }
                void __print(vector<int> a)
                {
                    for (auto x : a)
                        cerr << x << " ";
                    cerr << endl;
                }
                void __print(set<int> s)
                {
                    for (auto x : s)
                        cerr << x << " ";
                    cerr << endl;
                }
                void __print(map<int, int> mp)
                {
                    for (auto x : mp)
                        cerr << x.ff << " " << x.ss << endl;
                    cerr << endl;
                }

                vi vp;
                const int prime_NN = 1e6;
                void prime()
                {
                    vector<bool> prm(prime_NN + 1, true);
                    prm[0] = prm[1] = 0;
                    for (int i = 2; i * i <= prime_NN; i++)
                    {
                        if (prm[i] == true)
                        {
                            for (int j = i * i; j <= prime_NN; j += i)
                            {
                                prm[j] = false;
                            }
                        }
                    }

                    for (int i = 2; i <= prime_NN; i++)
                    {
                        if (prm[i])
                            vp.pb(i);
                    }
                }

                int _ceil(int a, int b)
                {
                    if (a % b == 0)
                    {
                        return a / b;
                    }
                    else
                    {
                        return a / b + 1;
                    }
                }

                int cnt_bit(int n)
                {
                    int c = 0;
                    while (n)
                    {
                        n &= n - 1;
                        c++;
                    }
                    return c;
                }

                void pri(vi v)
                {
                    rep(0, i, v.size()) { cout << v[i] << " "; }
                    cout << endl;
                }
                vector<int> in(int n)
                {
                    vector<int> a(n);
                    rep(0, i, n) cin >> a[i];
                    return a;
                }
                set<int> input_set(int n)
                {
                    set<int> s;
                    rep(0, i, n)
                    {
                        int x;
                        cin >> x;
                        s.insert(x);
                    }
                    return s;
                }
                multiset<int> input_multiset(int n)
                {
                    multiset<int> ms;
                    rep(0, i, n)
                    {
                        int x;
                        cin >> x;
                        ms.insert(x);
                    }
                    return ms;
                }
                vi prime_factors(int n)
                {
                    vi prime;
                    for (int i = 2; i * i <= n; i++)
                    {
                        while (n % i == 0)
                        {
                            prime.pb(i);
                            n /= i;
                        }
                    }
                    if (n > 1)
                    {
                        prime.pb(n);
                    }
                    return prime;
                }
            




                int getMid(int s, int e) { return s + (e -s)/2; } 
 
/* A recursive function to get the sum of values in the given range 
    of the array. The following are parameters for this function. 
 
    st --> Pointer to segment tree 
    si --> Index of current node in the segment tree. Initially 
            0 is passed as root is always at index 0 
    ss & se --> Starting and ending indexes of the segment represented 
                by current node, i.e., st[si] 
    qs & qe --> Starting and ending indexes of query range */
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si) 
{ 
    // If segment of this node is a part of given range, then return 
    // the sum of the segment 
    if (qs <= ss && qe >= se) 
        return st[si]; 
 
    // If segment of this node is outside the given range 
    if (se < qs || ss > qe) 
        return 0; 
 
    // If a part of this segment overlaps with the given range 
    int mid = getMid(ss, se); 
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) + 
        getSumUtil(st, mid+1, se, qs, qe, 2*si+2); 
} 
 
/* A recursive function to update the nodes which have the given 
index in their range. The following are parameters 
    st, si, ss and se are same as getSumUtil() 
    i --> index of the element to be updated. This index is 
            in the input array. 
diff --> Value to be added to all nodes which have i in range */
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si) 
{ 
    // Base Case: If the input index lies outside the range of 
    // this segment 
    if (i < ss || i > se) 
        return; 
 
    // If the input index is in range of this node, then update 
    // the value of the node and its children 
    st[si] = st[si] + diff; 
    if (se != ss) 
    { 
        int mid = getMid(ss, se); 
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1); 
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2); 
    } 
} 
 
// The function to update a value in input array and segment tree. 
// It uses updateValueUtil() to update the value in segment tree 
void updateValue(vi &arr, int *st, int n, int i, int new_val) 
{ 
    // Check for erroneous input index 
    if (i < 0 || i > n-1) 
    { 
        cout<<"Invalid Input"; 
        return; 
    } 
 
    // Get the difference between new value and old value 
    int diff = new_val - arr[i]; 
 
    // Update the value in array 
    arr[i] = new_val; 
 
    // Update the values of nodes in segment tree 
    updateValueUtil(st, 0, n-1, i, diff, 0); 
} 
 
// Return sum of elements in range from index qs (query start) 
// to qe (query end). It mainly uses getSumUtil() 
int getSum(int *st, int n, int qs, int qe) 
{ 
    // Check for erroneous input values 
    if (qs < 0 || qe > n-1 || qs > qe) 
    { 
        cout<<"Invalid Input"; 
        return -1; 
    } 
 
    return getSumUtil(st, 0, n-1, qs, qe, 0); 
} 
 
// A recursive function that constructs Segment Tree for array[ss..se]. 
// si is index of current node in segment tree st 
int constructSTUtil(vi &arr, int ss, int se, int *st, int si) 
{ 
    // If there is one element in array, store it in current node of 
    // segment tree and return 
    if (ss == se) 
    { 
        st[si] = arr[ss]; 
        return arr[ss]; 
    } 
 
    // If there are more than one elements, then recur for left and 
    // right subtrees and store the sum of values in this node 
    int mid = getMid(ss, se); 
    st[si] = constructSTUtil(arr, ss, mid, st, si*2+1) + 
            constructSTUtil(arr, mid+1, se, st, si*2+2); 
    return st[si]; 
} 
 
/* Function to construct segment tree from given array. This function 
allocates memory for segment tree and calls constructSTUtil() to 
fill the allocated memory */
int *constructST(vi &arr, int n) 
{ 
    // Allocate memory for the segment tree 
 
    //Height of segment tree 
    int x = (int)(ceil(log2(n))); 
 
    //Maximum size of segment tree 
    int max_size = 2*(int)pow(2, x) - 1; 
 
    // Allocate memory 
    int *st = new int[max_size]; 
 
    // Fill the allocated memory st 
    constructSTUtil(arr, 0, n-1, st, 0); 
 
    // Return the constructed segment tree 
    return st; 
} 



             int fun(vi &v){
                int sm1=0,sm2=0;
                f(i,v.size()/2){
                    sm1+=v[i];
                }
                for(int i=v.size()/2;i<v.size();i++) sm2+=v[i];
                // c("sm "<<sm1<<" "<<sm2)
                return sm2-sm1;
             }

             

                void solve()
                {
                    mkabc
                    if(a==b==c) c("-1")
                    else{
                        int mn = min(a,b);
                        int mn2  = min(b,c);
                        
                        c(2*min(mn,mn2))
                    }
                    

                }
                
                    
                

                int32_t main()
                {
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);

                    int t;
                    cin >> t;

                    while (t--)
                    {
                        solve();
                    }

                    return 0;
                }
                //