
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


                    //11 11 2 4 6 9 
                    // 111 2 4 6
                    // 1111 2 5 6 7   sm =3 sm2 = 1
                    //sm = 3
                    //sm2 = 4
                    ///11 2 4 3 0
                    // 1 2 3 0
                    // 1 2 4 3 0 = 25
                    // 5*6 = 30


                    int getIndex(vector<int> v, int K)
                    {
                        auto it = find(v.begin(), v.end(), K);

                        // If element was found
                        if (it != v.end())
                        {

                            // calculating the index
                            // of K
                            int index = it - v.begin();
                            return index;
                        }
                    }

            

                    int mex_vec(vector<int> const &A)
                    {
                        set<int> b(A.begin(), A.end());

                        int result = 0;
                        while (b.count(result))
                            ++result;
                        return result;
                    }

                    vi mex_check_dif(int l,int r, vi &v,vi &nv,int c,vector<pair<int ,int >> &vp){
                        map<int ,int >mp;
                        vi ind_vec;

                        int sm=0,cnt=0;
                        for(int i=l;i<=r;i++){
                            mp[v[i]]++;
                        }
                        // int mp_sec;
                        
                        for(auto it:mp){
                            if(it.second>=2) sm+=it.second-1;
                            nv.pb(it.first);
                        }
                        // pri(nv);
                        // 5 1 3 4 1
                        // 0 1 ..
                        // 0 1 3 2 1

                        //1 2 3 4
                        // 1 2 3 0
    

                        int sm2=0 , v_sm=0;
                        f(i,nv.size()-1){
                            if(abs(nv[i+1]-nv[i])>=2) sm2++;
                        }
                        for(int i = l;i<=r;i++)  v_sm+=v[i];
                        // c("lr "<<l<<" "<<r)
                    
                        // c("before")
                        //     pri(nv);

                            int mex=mex_vec(nv);
                            if(sm==0){
                                while (mex < *max_element(all(nv)))
                                {
                                    mex = mex_vec(nv);
                                    srtrev(nv);
                                    c("REV")
                                    pri(nv);
                                    // c("mex "<<mex)
                                    if(mex < *max_element(all(nv))){
                                        int ii = getIndex(v , nv[0]);
                                        ind_vec.pb(ii);
                                        c("ind_veccc "<<nv[0])
                                        nv.erase(nv.begin());
                                        nv.pb(mex);
                                        cnt++;
                                        // c("C "<<cnt)
                                    }else break;
                                }
                                srt(nv);
                            }
                            else
                            {   
                                if(sm>0){
                                    for(int i=l;i<=r;i++){
                                        if(mp[v[i]]>=2){
                                            for(int j=i+1;j<=r;j++){
                                                if(v[j]==v[i]){
                                                    mex = mex_vec(nv);
                                                    ind_vec.pb(j);5
                                                    mp[v[i]]--;
                                                    sm--;
                                                    nv.pb(mex);
                                                }
                                            }
                                        }
                                    }
                                }
                                // while (sm > 0)
                                // {
                                //     mex = mex_vec(nv);
                                //     // c("ind "<<nv.begin() + nv.size()-1)
                                //     srtrev(nv);
                                //     // c("REV")
                                
                                //     // pri(nv);
                                //     // c("mex "<<mex)
                                //     if(sm > 0)
                                //         // if(mex>0) ind_vec.pb(mex-1);
                                //         // c("ind_veccc "<<nv[0])

                                //         nv.pb(mex);
                                //         sm--;
                                //         cnt++;
                                //         // c("C "<<cnt)

                                //     }else break;
                                // }

                                
                                while (mex < *max_element(all(nv)))
                                {
                                    mex = mex_vec(nv);
                                    // c("ind "<<nv.begin() + nv.size()-1)
                                    srtrev(nv);
                                    c("REV")
                                    pri(nv);
                                    // c("mex "<<mex)
                                    if(mex < *max_element(all(nv))){
                                        ind_vec.pb(getIndex(v , nv[0]));
                                        // ind_vec.pb(nv[0]);
                                        c("ind_veccc "<<nv[0])
                                        nv.erase(nv.begin());
                                        nv.pb(mex);

                                        cnt++;
                                        // c("C "<<cnt)

                                    }else break;
                                }
                                srt(nv);
                            }

                            // c("after")
                            // pri(nv);

                            
                        int f_mex = mex_vec(nv);
                        
                        // c("f_mex "<<f_mex<<" "<<"f*nv.size() "<<f_mex*nv.size()<<" "<<"v_sm "<<v_sm)
                        // c("CCCC "<<c)

                        c = cnt;
                        // c("CNT "<<c)'

                        // pri(nv);
                    

                        vi return_ans;
                        
                        
                        if(f_mex*nv.size()>v_sm){
                        return_ans.pb(1);
                        return_ans.pb(c);
                        
                        for(int i=0;i<ind_vec.size();i++) return_ans.pb(ind_vec[i]);
                          c("return_ans ")
                                f(i,return_ans.size()) cout<<return_ans[i]<<" ";
                                cout<<endl;
                        return  return_ans;
                        } 
                        
                        return_ans.pb(0);
                        return_ans.pb(c);
                        for(int i=0;i<ind_vec.size();i++) return_ans.pb(ind_vec[i]);
                        c("return_ans ")
                                f(i,return_ans.size()) cout<<return_ans[i]<<" ";
                                cout<<endl;
                        return  return_ans;
                    }
                    //1 2 3
                    //0 1 2

                    //2 4 6 = 12
                    //2 4 0
                    //2 1 0
                    //3 3 3 = 9

                    int sum_ans(vi &v){
                        int sm=0;
                        f(i,v.size())sm+=v[i];
                        return sm;
                    }

                    
                    /// 0 0 0 
                    //0 0 1
                    //2 0 1

                    //4
                    // 0 1 1 3 6
                    // 0 1 2 3 6
                    // 0 1 2 3 4

                    void solve()
                    {
                        mkn
                        vi v(n);
                        v =in(n);
                        vb fin(n,0);

                        if(n==1 && v[0]==0){
                            c(1<<" "<<1)
                            c(1<<" "<<1)
                            return;
                        }
                        // pri(v);

                        int ans=0;
                        vector<pair<int ,int >>vp;
                        f(i,n-1){
                            for(int j = n-1;j>=i+1;j--){
                                vi nv;
                                int c=0;

                                // c("check "<<mex_check_dif(i,j,v,nv))
                                vi return_ans = mex_check_dif(i,j,v,nv,c,vp);
                                
                                if(return_ans[0]){
                                    c = return_ans[1];
                                    // c("C "<<c)
                                    // c("ij "<<i<<" "<<j)
                                    int mex_element = mex_vec(nv);
                                    ans+= (j-i+1)*mex_element;
                                    // pri(nv);
                                    int ind=2;
                                    // c("Vd "<<nv[ind])

                                    // map<int, int> mp;
                                    // vi ind_vec;

                                    // int sm = 0, cnt = 0;
                                    // for (int k = i; k <= j; k++)
                                    // {
                                    //     mp[v[k]]++;
                                    
                                    // }
                                    // for (int k = i; k <= j; k++)
                                    // {
                                    //     if(mp[v[k]]>=2){
                                    //         vp.pb({k+1,k+1});
                                    //         mp[v[k]]--;
                                    //     }
                                    // }



                                    // f(i,n){

                                    // }
                                    
                                    // while(c-- && return_ans.size()>=2 && ind<return_ans.size()){
                                    //     int ii = getIndex(v , return_ans[ind]);
                                    //     // if(ii>=18){
                                    //     //     ii = getIndex(nv , return_ans[ind]);
                                    //     // }
                                    //     // c("I "<<ii)
                                    //     vp.pb({ii+1,ii+1});
                                    //     ind++;
                                    // }



                                    for(int k=2;k<=return_ans.size();k++){
                                        vp.pb({return_ans[k]+1 , return_ans[k]+1});
                                    }
                                    vp.pb({i+1,j+1});
                                    i+=j;
                                    break;
                                }
                            }
                        }

                        f(i,vp.size()){
                            for(int j = vp[i].first-1;j<vp[i].second;j++){
                                if(fin[j]==0) fin[j]=1;
                            }
                        }
                        
                        f(i,n){
                            // cout<<fin[i]<<" ";
                            if(fin[i]==0) ans+=v[i];
                        }
                        // cout<<endl;

                        cout<<ans<<" "<<vp.size()<<endl;
                        f(i,vp.size()){
                            cout<<vp[i].first<<" "<<vp[i].second<<endl;
                        }

                    }


                    //0 1 = 2
                    //sm2 = 1
                    
                        

                    

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