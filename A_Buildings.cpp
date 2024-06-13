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

    const int M = 1000000007;
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
    vi divisors(int n)
    {
        vi v;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.pb(i);
                if (i != n / i)
                {
                    v.pb(n / i);
                }
            }
        }
        return v;
    }
    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return gcd(b, a % b);
    }
    long long binMultiply(long long a, long long b, long long mod)
    {
        long long ans = 0;
        a = (a % mod);
        while (b > 0)
        {
            if (b & 1)
            {
                ans = (ans + a) % mod;
            }
            a = (a + a) % mod;
            b = b >> 1;
        }
        return ans;
    }
    int lcm(int a, int b) { return (a * b) / gcd(a, b); }
    int binExp(int a, int b, int mod)
    {
        int ans = 1;
        while (b > 0)
        {
            if (b & 1)
            {
                ans = (ans * 1LL * a) % mod;
            }
            a = (a * 1LL * a) % mod;
            b = b >> 1;
        }
        return ans;
    }
    int ncr(int n, int r)
    {
        int ans = fact[n];
        int den = (fact[n - r] * 1LL * fact[r]) % M;
        return (ans * binExp(den, M - 2, M)) % M;
    }
    int power(int a, int b, int mod)
    {
        if (b == 0)
        {
            return 1;
        }
        int res = power(a, b / 2, mod);
        if (b & 1)
        {
            return (a * res * res) % mod;
        }
        else
        {
            return (res * res) % mod;
        }
    }
    bool prime_factors_one(int n)
    {
        bool f = 0;
        for (int i = 3; i <= n; i += 2)
        {
            if (n % i == 0)
            {
                f = 1;
                break;
            }
        }
        return f;
    }
    bool divisors_check(int n)
    {
        bool f = false;
        for (int i = 3; i * i <= n; i += i)
        {
            if (n % i == 0)
            {
                f = true;
                break;
            }
        }
        return f;
    }

    // mkn
    // v = in(n);
    // seti st;
    // st = input_set(n);
    // __print(st);

    bool fun(int n, string &s)
    {
        char temp = s[0];
        int c = 0;

        f(i, n)
        {
            temp = s[i];
            umapc mp;
            bool f = 0, ef = 0;
            for (int j = i; j < s.length(); j += n)
            {

                mp[s[j]]++;
            }

            if (mp.size() > 2)
                return 0;
            else if (mp.size() == 2)
            {
                ef = 1;
                for (auto it : mp)
                {
                    if (it.ss == 1)
                        f = 1;
                    break;
                }
            }
            if (f || ef)
                c++;
            if (c > 1)
                return 0;
        }

        return 1;
    }

    bool ff(string &s, umapc &mp)
    {
        int c = 0;

        f(i, s.size())
        {
            mp[s[i]]++;
        }

        for (auto it : mp)
        {
            if ((it.ss == 1 && mp.size() == 2) || (it.ss = s.size() && mp.size() == 1))
                return 1;
        }
        return 0;
    }

    double divide(double numerator, double denominator)
    {
        if (denominator == 0)
        {
            return 0; 
        }
        return numerator / denominator;
    }

    int doubleToInt(double num) {
        // Rounds the double number to the nearest integer
        int rounded = static_cast<int>(num + 0.5);
        return rounded;
    }

    double multiply_(int intValue, double doubleValue) {
        return intValue * doubleValue;
    }



    
    void solve()
    {
        mkn
        vi v(n);
        v = in(n);
        \
    }

    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t=1;
        // cin >> t;

        while (t--)
        {
            solve();
        }

        return 0;
    }
    //