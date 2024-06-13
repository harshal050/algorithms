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




            // mkn
            // v = in(n);
            // seti st;
            // st = input_set(n);
            // __print(st);


            // code 1 :

            // int fun1(int i,int j,int n,int m,int &c , vvi &dp){
            //     if(i==n-1 && j==m-1){
            //         c++;
            //         return 1;
            //     }

            //     if(i>=n || j>=m) return 0;

            //     if(dp[i][j]!=-1) return dp[i][j];
                
            //     int a=-1e9,b=-1e9;
                
            //     a = fun1(i+1,j,n,m,c);
            //     b = fun1(i,j+1,n,m,c);

            //     return  dp[i][j] = c;

            // }





            //code 2 : 


             int fun2(int i,int j,int n,int m, vvi &v,int &c){
                
                if(i==n-1 && j==m-1){
                    c++;
                    // cout<<1;
                    return 1;
                }
                
                if(i>=n || j>=m) return 0;

                if(v[i][j]==1) return 0;

                
                int a=0,b=0;
                
                if(i<n)  a = fun2(i+1,j,n,m,v,c);
                if(j<m) b = fun2(i,j+1,n,m,v,c);

                if(a || b)  return  1;
                if(a==0 && b==0) return 0;

            }









            //code 3 : 


            int fun3(int i,int j,int n,int m, vvi &v){
                
                
                if(i==n-1 && j==m-1) return v[i][j];  

                if(i>n-1 || j>m-1) return 1e9;
                
                                
                int a = v[i][j]  + fun3(i+1,j,n,m,v);
                int b = v[i][j]  + fun3(i,j+1,n,m,v);

                return  min(a ,b);

            }

            int fun3(int i,int j,int n,int m, vvi &v , vvi &dp){

                if(i==n-1 && j==m-1) return v[i][j];  
                if(i>=n || j>=m) return 1e9;
                
                if(dp[i][j]!=-1) return dp[i][j];
                
                int a = v[i][j]  + fun3(i+1,j,n,m,v,dp);
                int b = v[i][j]  + fun3(i,j+1,n,m,v,dp);

                return dp[i][j] =   min(a ,b);

            }



            int tringle(int i,int j,int n,vvi &v){
                if(j<0 && j>=i+1) return 1e9;
                if(i==n-1) return v[i][j];
    
                int a = v[i][j] +  tringle(i+1,j,n,v);
                int b = v[i][j] +  tringle(i+1,j-1,n,v);
                int c = v[i][j] +  tringle(i+1,j+1,n,v);

                return  min(min(a,b) , c);

            }

            int tringle(int i,int j,int n,vvi &v , vvi &dp){
                if(j<0 && j>=i+1) return 1e9;
                if(i==n-1) return v[i][j];

                if(dp[i][j]!=-1) return dp[i][j];

                int a = v[i][j] +  tringle(i+1,j,n,v);
                int b = v[i][j] +  tringle(i+1,j-1,n,v);
                int c = v[i][j] +  tringle(i+1,j+1,n,v);

                return  dp[i][j] = min(min(a,b) , c);
    
            }



            


            int fun12(int i,int j,int n,int m,int &c , vvi &dp){
                if(i==n-1 && j==m-1){
                    c++;
                    dp[i][j]  = c;
                    return 1;
                }

                if(i>=n || j>=m) return 0;

                if(dp[i][j]!=-1) return dp[i][j];
                
                int a=-1e9,b=-1e9;
                
                a = fun12(i+1,j,n,m,c,dp);
                b = fun12(i,j+1,n,m,c,dp);

                return  c;

            }


            int squresum(int i,int j,int n,vvi &v,vvi &dp){

                if(j<0 && j>=n) return 1e9;
                if(i==n-1) return v[i][j];

                if(dp[i][j]!=-1) return dp[i][j];

                    int a = v[i][j] + squresum(i + 1, j, n, v,dp);
                    int b = v[i][j] + squresum(i + 1, j - 1, n, v,dp);
                    int c = v[i][j] + squresum(i + 1, j + 1, n, v,dp);
                    
                    return dp[i][j] = min(min(a, b), c);
                
            }


            




        void solve(){   
            mkab
            int n = a,m= b;

            vvi v(n , vi(m , 0));   
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>v[i][j];   
                }
            }

            vvi dp(n+1 , vi(n+2   , -1));   
            
            int c=0;
            int mn= 1e9,mnn=1e9;

            // c(fun12(0,0,n-1,m-1,c,dp))


            // for(int i=0;i<=n;i++){
            //     for(int j=0;j<=m;j++){
            //         cout<<dp[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }



            // for(int i=0;i<n;i++){
            //     int mmn = squresum(0,i,n,v,dp);
            //     mn = min(mn , mmn);
            // }
            // c(mn)



            for(int i=1;i<=n;i++){
                dp[n-1][i] = v[n-1][i-1];
                dp[i-1][0] = 1e9;
                dp[i-1][n+1] = 1e9;
            }
            

            for(int j=0;j<=n+1;j++){
                dp[n][j] = 1e9;
            }

            // c(tringle(0,0,n,v,dp))

           
            // for(int i=0;i<=n;i++){
            //     for(int j=0;j<n+2;j++){
            //         cout<<dp[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            bool f=1;
            int ind=1,minma=1e9;

            for(int k=1;k<=n;k++)
            {
                for (int i = n-2; i >= 0; i--)
                {
                    for (int j =1; j <= n; j++)
                    {   
                        if(f){
                            int ind = j;
                            j = k;
                            f = 0;

                            int a = v[i][j] + dp[i + 1][j];
                            int b = v[i][j] + dp[i + 1][j - 1];
                            int c = v[i][j] + dp[i + 1][j + 1];

                            dp[i][j] = min(min(a, b), c);
                            j = ind;
                        }else{
                             int a = v[i][j] + dp[i + 1][j];
                            int b = v[i][j] + dp[i + 1][j - 1];
                            int c = v[i][j] + dp[i + 1][j + 1];

                            dp[i][j] = min(min(a, b), c);
                        } 
                    }
                }

                  
                minma = min(dp[0][k] , minma);  
                 c("minma "<<minma)
                f=1;
            }
           

            for(int i=0;i<=n;i++){
                for(int j=0;j<n+2;j++){
                    cout<<dp[i][j]<<" ";
                }
                cout<<endl;
            }


            

            // for(int i=0;i<n;i++){
            //     cout<<dp[0][i+1]<<" ";
            //     // mn = min(dp[0][i+1] , mnn);
            // }
            // c(mn)


            





            // c(fun3(0,0,n,m,v))


            // <------------------------------------------------>
            
            // /tebulr for min sum path matrix   :::::::

            // for(int i =0;i<=n;i++) dp[i][m] = 1e9;
            // for(int j =0;j<=m;j++) dp[n][j] = 1e9;
            
            // dp[n-1][m-1] = v[n-1][m-1];

            // for(int i=0;i<=n;i++){
            //     for(int j=0;j<=m;j++){
            //         cout<<dp[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }

            // // for(int i=n-2;i>=0;i --) dp[i][m-1] = v[i][n-1]+dp[i+1][m-1];
            // // for(int j=m-2;j>=0;j--) dp[n-1][j] = v[n-1][j] + dp[n-1][j-1];
            // // cout<<"FSHS"<<n<<m<<endl;

            // for(int i=n-1;i>=0;i--){
            //     for(int j = m-1;j>=0;j--){
            //         if(i==n-1 && j==m-1) continue;
            //             int a = v[i][j] + dp[i + 1][j];  //n-1 m-2 //
            //             int b = v[i][j] + dp[i][j + 1];  //n-2  m-1
            //             c(a<<" "<<b<<" "<<v[i][j]<<"ij "<<i<<" "<<j)
            //             dp[i][j] = min(a, b);
                    
            //     }
            //     cout<<endl;
            // }
            

            // for(int i=0;i<=n;i++){
            //     for(int j=0;j<=m;j++){
            //         cout<<dp[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            
            // c(dp[0][0])

            //<------------------------------------------------>




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