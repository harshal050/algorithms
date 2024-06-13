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
        




            bool fun(vi &v){
                int sm=0;
                f(i,v.size()){
                    sm+=v[i];
                }
                if(sm%2==0) return 1;
                return 0;
            }
            void solve()
            {
                mkn
                
                        
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