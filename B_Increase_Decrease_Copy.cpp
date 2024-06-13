    #include<bits/stdc++.h> 
    using namespace std;

    class Solution{  
    public:
        int  fun(int ind , int sm , vector<int>&v , vector<vector<int>> &dp,int t, int &c){
            if(sm==t) return 1; 
            if(ind < 0) return 0;
            
            if(dp[ind][sm]!=-1) return dp[ind][sm];

            int a = fun(ind-1, sm + v[ind] , v,dp,t,c);
            int b = fun(ind-1, sm , v,dp,t,c);
            return dp[ind][sm] = a+b;
    }

    public:
        int isSubsetSum(vector<int>&v ,int t){  
            // code here 
            int n = v.size();   
            int sm=0;
            for(int i=0;i<n;i++) sm+=v[i];
            
                
            vector<vector<int>> dp(n , vector<int>(sm, -1));
            
            int c=0;
            // cout<<t<<endl;
            return  fun(n-1,0,v,dp,t,c);
            
        }
    };

    // 5  1 11 5

    //3 3 2 3 6
    //3*3*2 = 3*6
    //8 9
    //gcd(sm1 , sm2)==1;
    //ans  : true







    



    int main() 
    { 
        int t;
        cin>>t;
        while(t--)
        {
            int N,sm;
            cin >> N>>sm;
            vector<int> arr(N);
            for(int i = 0; i < N; i++){
                cin >> arr[i];
            }
            
            
            Solution ob;
            cout << ob.isSubsetSum(arr,sm) << endl;
        }
        return 0; 
    } 