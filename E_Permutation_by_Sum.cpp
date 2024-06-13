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
    #define con continue
    #define S second
    #define F first
    #define pb push_back
    #define pob pop_back
    #define el endl
    #define yes cout << "YES" << endl
    #define no cout << "NO" << endl
    #define maken int n;cin >> n;
    #define makex int x;cin >> x;
    #define makes string s;cin>>s;
    #define makeab int a,b;cin>>a>>b;
    #define makeabc int a,b,c;cin>>a>>b>>c;
    #define makeabcd int a,b,c,d;cin>>a>>b>>c>>d;
    
    
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
    
    
    void multiply(int a[3][3], int b[3][3])
    {
        // Creating an auxiliary matrix to store elements 
        // of the multiplication matrix
        int mul[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    mul[i][j] += a[i][k]*b[k][j];
            }
        }
    
        // storing the multiplication result in a[][]
        for (int i=0; i<3; i++)
            for (int j=0; j<3; j++)
                a[i][j] = mul[i][j];  // Updating our matrix
    }
    
    // Function to compute F raise to power n-2.
    int power(int F[3][3], int n)
    {
        int M[3][3] = {{1,1,0}, {1,0,0}, {0,1,0}};
    
        // Multiply it with initial values i.e with
        // F(0) = 0, F(1) = 1, F(2) = 1
        if (n==1)
            return F[0][0] + F[0][1];
    
        power(F, n/2);
    
        multiply(F, F);
    
        if (n%2 != 0)
            multiply(F, M);
    
        // Multiply it with initial values i.e with
        // F(0) = 0, F(1) = 1, F(2) = 1
        return F[0][0] + F[0][1] ;
    }
    
    // Return n'th term of a series defined using below
    // recurrence relation.
    // f(n) is defined as
    //    f(n) = f(n-1) + f(n-2) + f(n-3), n>=3
    // Base Cases :
    //    f(0) = 0, f(1) = 1, f(2) = 1
    int findNthTerm(int n)
    {
    
        int F[3][3] = {{1,1,0}, {1,0,0}, {0,1,0}} ;
    
        //Base cases
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
    
        return power(F, n-2);
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
    
    void print(vi v) { rep(0, i, v.size()) { cout << v[i] << " "; } cout << endl;}
    vector<int> input(int n) { vector<int> a(n); rep(0, i, n) cin >> a[i]; return a; }
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


    int prime_factors_size(int n,int a) {
    vi prime; 
    int c=0;
    for(int i = 2; i*i <= n; i++) 
    {
        while(n % i == 0) 
    { 
        c++;n /= i; } } 
    if(n > 1) { c++; } 
    return c+1; 
    
    }
    int getSum(string str)
    {
        int sum = 0;
    
        // Traversing through the string
        for (int i = 0; i < str.length(); i++) {
            // Since ascii value of
            // numbers starts from 48
            // so we subtract it from sum
            sum = sum + str[i] - 48;
        }
        return sum;
    }




    void reverseStr(string& str)
    {
        int n = str.length();
    
        // Swap character starting from two
        // corners
        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);

    }






bool cmp(pair<char, int>& a, pair<char, int>& b) 
{ 
    return a.second < b.second; 
} 
 
// Function to sort the map according 
// to value in a (key-value) pairs 
void _sort(map<char, int>& M,string &tmp) 
{ 
 
    // Declare vector of pairs 
    vector<pair<char, int> > A; 
 
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
 
    // Sort using comparator function 
    sort(A.begin(), A.end(), cmp); 
 
    // Print the sorted value 
    for (auto& it : A) { 
 
        // cout << it.first << ' '
        //     << it.second << endl; 
            tmp+=string(it.second , it.first);
    } 
} 




    void solve(){
        maken
        makes
        vector<pair<char,char>>notsame,notsame2;
        vector<char>same;
        map<char,int>mp;
        if(n%2==1) c(-1)
        else{
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]){
                    notsame.pb({s[i] ,s[n-i-1]});
                }else{
                    same.pb(s[i]);
                }
            }
            if(same.size()==0) c(0)
            else{

            
            // srt(same);
            f(i,same.size()){
                mp[same[i]]++;
            }
            string tmp;
            _sort(mp,tmp);
            // c("tmp")
            // c(tmp)

            string new_same_string;
            for(auto it:mp){
                new_same_string += string(it.second,it.first);
            }

            f(i,tmp.size()){
                same [i] = tmp[i];
            }

            // c("new_tmp_string")


            // f(i,tmp.size()){
            //     cout<<tmp[i]<<" ";
            // }
            // cout<<endl;
            



        
            // f(i,same.size()){
            //     cout<<same[i]<<" ";
            // }
            // cout<<endl;

            vector<char>ns;
            int c=0;
            // c("SM ")
            //  f(i,same.size()) cout<<same[i]<<" ";
            //  cout<<endl;

            int n_ct=0;


            if(same.size()>1 && same.size()%2==0){
                // c("HEEEE")
                for(int i=0;i<same.size()/2;i++){
                    if(same[i]==same[same.size()-i-1]){
                        // c("hello")
                        n_ct++;
                        ns.pb(same[i]);
                        notsame2.pb({same[i],same[i]});
                        notsame2.pb({same[i],same[i]});
                    }else{
                        notsame2.pb({same[i] , same[same.size()-i-1]});
                        notsame2.pb({same[same.size()-i-1] , same[i]});
                        c++;
                    } 
                }
            }
            else if(same.size()>1 && same.size()%2==1){
                for(int i=0;i<same.size()/2;i++){
                    if(same[i]==same[same.size()-i-1]){
                        n_ct++;
                        ns.pb(same[i]);
                        notsame2.pb({same[i],same[i]});
                        notsame2.pb({same[i],same[i]});
                    }else{
                        notsame2.pb({same[i] , same[same.size()-i-1]});
                        notsame2.pb({same[same.size()-i-1] , same[i]});
                        c++;
                    }
                }
                ns.pb(same[same.size()/2]);
                notsame2.pb({same[same.size()/2],same[same.size()/2]});                
            }
            else{
                ns.pb(same[0]);
                notsame2.pb({same[0],same[0]});
            }  

            // c("Ns")
            // f(i,ns.size()) cout<<ns[i]<<" ";
            // cout<<endl;
            
            
            // c("Sta")
            // c("C "<<c)


            
           


            vector<char> remain,new_ns;
            bool flag=0;
            for(int i=0;i<ns.size();i++){
                for(int ind=0;ind<notsame2.size();ind++){
                    if(notsame2[ind].first != ns[i] && notsame2[ind].second != ns[i]){
                        char temp = notsame2[ind].first;
                        notsame2[ind].first =ns[i];
                        notsame2.pb({temp , ns[i]});
                        // ns.erase(i);a
                        c++;
                        flag = 1;
                        break;
                    }
                }
                if(flag==0){
                    new_ns.pb(ns[i]);
                }else flag=0;
            }

            // c("NEW ns")
            // f(i,new_ns.size()) cout<<new_ns[i]<<" ";
            // cout<<endl;

            int ind=0,c2=0,counter=0;
            flag=0;
            bool not_valid = 0;
            for(int ind=0;ind<new_ns.size();ind++){
                f(i,notsame.size()){
                    if(notsame[i].first != new_ns[ind] && notsame[i].second != new_ns[ind]){
                        char temp = notsame[i].first;
                        notsame[i].first =new_ns[ind];
                        new_ns[ind] = temp;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    not_valid = 1;
                    break;
                }else flag=0;
            }
            // c("COunter  "<<counter)
            // c("c2 "<<c2)
            // int fn=0;
            // if(same.size()%2==0){
            //     fn=1;
            // }else{
            //     fn=0;
            // } 
            
            if(not_valid){
                c(-1)
            }else{
                c(c+(new_ns.size()+n_ct))
            }
        }
        }  
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