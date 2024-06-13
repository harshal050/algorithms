                                                                /*  यदा यदा हि धर्मस्य ग्लानिर्भवति भारत। 
                                                                    अभ्युत्थानमधर्मस्य तदात्मानं सृजाम्यहम् 
                                                                    परित्राणाय साधूनां विनाशाय च दुष्कृताम् ।
                                                                    धर्मसंस्थापनार्थाय सम्भवायुगे युगे  */
                        

                        #include<bits/stdc++.h> 
                        using namespace std; 
                        
                        /**********************   Template Start  *************************/
                        
                        #define endl "\n"
                        // #define int                                     long long
                        #define vi                                      vector<int> 
                        #define vb                                      vector<bool>
                        #define vvi                                     vector<vector<int>> 
                        #define vvb                                     vector<vector<bool>>
                        #define pb                                      push_back
                        #define pob                                     pop_back
                        #define rep(x, i, y)                            for(int i = x; i < y; i++)
                        #define all(a)                                  a.begin(), a.end()
                        #define mapi                                     map<int,int>
                        #define seti                                     set<int>
                        #define umapi                                    unordered_map<int,int>
                        #define useti                                    unordered_set<int>
                        #define mapc                                     map<int,char>
                        #define setc                                     set<char>
                        #define umapc                                    unordered_map<int,char>
                        #define usetc                                    unordered_set<char>
                        #define pq                                      priority_queue<int> 
                        #define pqG                                     priority_queue<int, vector<int>, greater<int>>
                        #define ff                                      first
                        #define ss                                      second
                        #define all(a)                                  a.begin(), a.end()
                        #define srt(a)                                 sort(a.begin(), a.end())
                        #define srtrev(a)                              sort(a.rbegin(), a.rend())
                        #define prdouble(x)                             cout << fixed << setprecision(10) << x
                        #define c(x)                                   {cout << x << endl;} 
                        
                        /**************************/
                        
                        #define int long long int
                        #define llu unsigned long long
                        // #define endl '\n'
                        
                        /**************************/
                        // const int aaa[100000+1];
                        const int NN = 2*1e5;
                        vi aaa(NN, 0);

                        #define f(i,n) for(int i=0;i<n;i++)
                        #define rf(i,n) for(int i=n-1;i>=0;i--)
                        #define f1(i,n) for(int i=1;i<=n;i++)
                        #define rf1(i,n) for(int i=n;i>=1;i--)
                        
                        
                        /**************************/

                        void revstr(string& str){ int n = str.length(); for (int i = 0; i < n / 2; i++) swap(str[i], str[n - i - 1]); }
                        
                        /**************************/
                        

                        #define con continue
                        #define S second
                        #define F first
                        #define pb push_back
                        #define pob pop_back
                        #define el endl
                        #define yes cout << "YES" << endl
                        #define no cout << "NO" << endl
                        #define mkn int n;cin >> n;
                        #define mkx int x;cin >> x;
                        #define mks string s;cin>>s;
                        #define mkab int a,b;cin>>a>>b;
                        #define mkabc int a,b,c;cin>>a>>b>>c;
                        #define mkabcd int a,b,c,d;cin>>a>>b>>c>>d;
                        
                        
                        // /-----------------------------------------/
                        
                        
                        string dc(int n)
                        {
                            string v=to_string(n);
                            return v;
                        }
                        
                        
                        // /-----------------------------------------/
                        
                        const int M = 1000000007;
                        const int mod =  998244353;
                        
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
                        void __print(vector<int> a) { for (auto x : a) cerr << x << " "; cerr << endl; }
                        void __print(set<int> s) { for (auto x : s) cerr << x << " "; cerr << endl; }
                        void __print(map<int, int> mp) { for (auto x : mp) cerr << x.ff << " " << x.ss << endl; cerr << endl; }
                        

                        vi vp; 
                        const int prime_NN = 1e6;
                        void prime(){
                            vector<bool>prm(prime_NN+1,true);
                            prm[0]=prm[1]=0;
                            for(int i=2;i*i<=prime_NN;i++){
                                if(prm[i]==true){
                                    for(int  j= i*i;j<=prime_NN;j+=i){
                                        prm[j] = false;
                                    } 
                                }
                            }
                            
                            for(int i =2;i<=prime_NN;i++){
                                if(prm[i]) vp.pb(i);
                            }
                        }
                        

                        int _ceil(int a,int b){
                        if(a%b==0){
                            return a/b;
                        }else{
                            return a/b + 1;
                        }
                        }


                        int cnt_bit(int n){
                        int c=0;
                        while(n){
                            n&=n-1;
                            c++;
                        }
                        return c;
                        } 
                        
                        void pri(vi v) { rep(0, i, v.size()) { cout << v[i] << " "; } cout << endl;}
                        vector<int> in(int n) { vector<int> a(n); rep(0, i, n) cin >> a[i]; return a; }
                        set<int> input_set(int n) { set<int> s; rep(0, i, n) { int x; cin >> x; s.insert(x); } return s; }
                        multiset<int> input_multiset(int n) { multiset<int> ms; rep(0, i, n) { int x; cin >> x; ms.insert(x); } return ms; }
                        vi prime_factors(int n) { vi prime; for(int i = 2; i*i <= n; i++) { while(n % i == 0) { prime.pb(i);  n /= i; } } if(n > 1) { prime.pb(n); } return prime; }
                        vi divisors(int n) { vi v; for(int i = 1; i*i <= n; i++) { if(n % i == 0) { v.pb(i); if(i != n / i) { v.pb(n / i); } } } return v; }
                        int gcd(int a, int b) { if(b == 0) { return a; } return gcd(b, a%b); }
                        long long binMultiply(long long a, long long b, long long mod) { long long ans = 0; a = (a % mod); while(b > 0) { if(b & 1) { ans = (ans + a) % mod; } a = (a + a) % mod; b = b >> 1; } return ans; }
                        int lcm(int a, int b) { return (a*b) / gcd(a, b); }
                        int binExp(int a, int b, int mod) { int ans = 1; while(b > 0) { if(b & 1) { ans = (ans * 1LL * a) % mod; } a = (a * 1LL * a) % mod; b = b >> 1; } return ans; }
                        int ncr(int n, int r) { int ans = fact[n]; int den = (fact[n - r] * 1LL * fact[r]) % M; return (ans * binExp(den, M - 2, M)) % M; }
                        int power(int a, int b, int mod) { if(b == 0) { return 1; } int res = power(a, b/2, mod); if(b & 1) { return (a * res * res) % mod; } else { return (res * res) % mod; }}
                        bool prime_factors_one(int n) { bool f=0; for(int i = 3; i<= n; i+=2) { if(n % i == 0){f=1;break;} }  return f; }
                        bool divisors_check(int n) { bool f=false; for(int i = 3; i*i <= n; i+=i) { if(n % i == 0) { f=true;break;} } return f; }
                        bool ts(int k,vi &v){ int l = 0; int r = v.size()-1; while(l<r){ int m1 = l + ((r-l)/3); int m2 = r - ((r-l)/3); if(v[m1]==k || v[m2]==k) return 1; if(v[m1]<k) l = m1+1; else if(v[m2]>k) r = m2-1; else { l = m1+1; r = m2-1;}} return 0;}


                        double fun(double x){
                            return  sin(x);
                        }

                        double fun_(double x , double b, double c){
                            return  x*x + b*x + c;
                        }
                        
                        
                      
                    double find_mino(double  b , double c){
                        double l = 0;
                        double r = double(44)/double(7);
                        // c(l<<" "<<r)
                        l+=0.0000001;
                        r-=0.0000001;
                        // c(l<<" "<<r)
                        double m1 = l , m2 = r;


                        while(m2-m1 > 0.0000001){
                            
                            m1 = l + ((r-l)/3);
                            m2 = r - ((r-l)/3);

                             double fm1 = fun_(m1,b,c);
                             double fm2 = fun_(m2,b,c);
                             double f2m1 = fun(m1);
                             double f2m2 = fun(m2);
                             double main_fun_m1 = static_cast<double>(fun_(m1 , b,c))/fun(m1);
                             double main_fun_m2 = static_cast<double>(fun_(m2 , b,c))/fun(m2);

                            //  c(fm1<<" "<<fm2)

                             if(fm1<fm2 && f2m1>f2m2){
                                r = m2;
                             }else if(fm1>fm2 && f2m1<f2m2){
                                l = m1;
                             }else{
                                if(main_fun_m1 < main_fun_m2){
                                    r = m2;
                                }else if(main_fun_m1 > main_fun_m2){
                                    l = m1;
                                }else{
                                    r = m2;
                                    l = m1;
                                }
                             }
                        }
                        
                        return static_cast<double>(fun_(l,b,c)) / fun(l);
                    }

                       


                    void solve(){
                        double a,b;cin>>a>>b;  
                       

                        double ans = find_mino(a,b);
                        // c(ans)
                        int i_ans = static_cast<double>(ans)*1000000;
                        // c(i_ans)
                        int tmp = ans;
                        // c("t "<<tmp)
                        int c=0;
                        while(tmp>0){
                            c++;
                            tmp/=10;
                        }
                        double f_ans = i_ans/1000000;
                        cout<<f_ans;
                        cout<<".";
                        
                        vi v;
                        
                        while(i_ans>0){
                            v.pb(i_ans%10);
                            i_ans/=10;
                        }
                        f(i,c) v.pop_back();

                        f(i,v.size()){
                            cout<<v[v.size()-i-1];
                        }
                        cout<<endl;




                        
                    }
                            
                            
                    
                    


                        int32_t main()
                        {
                            ios_base::sync_with_stdio(false);
                            cin.tie(NULL);
                            
                        
                            int t;
                            cin >> t;
                            
                        
                            while(t--)
                            {
                                solve();
                            }
                        
                            return 0;
                        }
                        //  