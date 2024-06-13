                                            /*  यदा यदा हि धर्मस्य ग्लानिर्भवति भारत। 
                                            अभ्युत्थानमधर्मस्य तदात्मानं सृजाम्यहम् 
                                            परित्राणाय साधूनां विनाशाय च दुष्कृताम् ।
                                            धर्मसंस्थापनार्थाय सम्भवायुगे युगे  */
 

#include<bits/stdc++.h> 
using namespace std; 
 
/**********************   Template Start  *************************/
//  #define int long long int

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
 
const long long int M = 1000000007;
// const int mod =  998244353;
 
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
long long int divisors_set(long long int n) { 
    set<long long int>st;
    for(long long int i = 1; i*i <= n; i++) 
    { if(n % i == 0) { st.insert(i); 
    if(i != n / i) 
    { st.insert(n / i); } }
    
    if(st.size()>3) return 0;
    
    } 
    return st.size(); 
}


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

using u64 = uint64_t;

u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u64)result * base % mod;
        base = (u64)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u64)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n) { // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}







bool fun(double n){
    if(ceil(sqrt(n))==sqrt(n)) if(MillerRabin(sqrt(n))) return true;
    return false;
}





















int max(int a, int b) { 
    return (a > b) ? a : b; 
} 
  
// A utility function to find maximum of three integers 
int max(int a, int b, int c) { 
    return max(max(a, b), c); 
} 
  
// Find the maximum possible sum in arr[] such that arr[m] 
// is part of it 
int maxCrossingSum(int arr[], int l, int m, int h) { 
    // Include elements on left of mid. 
    int sum = 0; 
    int left_sum = INT_MIN; 
    for (int i = m; i >= l; i--) { 
        sum = sum + arr[i]; 
        if (sum > left_sum) 
            left_sum = sum; 
    } 
  
    // Include elements on right of mid 
    sum = 0; 
    int right_sum = INT_MIN; 
    for (int i = m; i <= h; i++) { 
        sum = sum + arr[i]; 
        if (sum > right_sum) 
            right_sum = sum; 
    } 
  
    // Return sum of elements on left and right of mid 
    // returning only left_sum + right_sum will fail for 
    // [-2, 1] 
    return max(left_sum + right_sum - arr[m], left_sum, right_sum); 
} 
  
// Returns sum of maximum sum subarray in aa[l..h] 
int maxSubArraySum(int arr[], int l, int h) { 
    // Invalid Range: low is greater than high 
    if (l > h) 
        return INT_MIN; 
    // Base Case: Only one element 
    if (l == h) 
        return arr[l]; 
  
    // Find middle point 
    int m = (l + h) / 2; 
  
    /* Return maximum of following three possible cases 
            a) Maximum subarray sum in left half 
            b) Maximum subarray sum in right half 
            c) Maximum subarray sum such that the subarray 
       crosses the midpoint */
    return max(maxSubArraySum(arr, l, m - 1), 
               maxSubArraySum(arr, m + 1, h), 
               maxCrossingSum(arr, l, m, h)); 
} 


void solve(){
    
    int n,k;cin>>n>>k;

    int arr[n];
    long long int sm=0;
    f(i,n){
        cin>>arr[i];
        sm+=(((arr[i]% M) + M) % M);
    }
    
    int max_sum = maxSubArraySum(arr, 0, n - 1); 
    if(max_sum<0) max_sum=0;
    // c("SM "<<sm)
    c("max_sum"<<" "<<max_sum)
    long long int p = pow(2,k);
    long long int ans = (((binMultiply(p,max_sum,M)% M) + M) % M);
    // c("ans "<<ans)
    long long int fa = ((((ans% M) + M) % M) + (((sm% M) + M) % M))%M;
    // c("fa "<<fa)
    long long int fft = ((((fa% M) + M) % M) - (((max_sum% M) + M) % M))%M;
    c("fft "<<fft)
    c(((fft % M) + M) % M);

    
    // c(M)
    // if(fft<0){
    //     c("sudguid"<<fft%M)
    // }
    // else c("sudguid"<<fft)


    
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
//  A