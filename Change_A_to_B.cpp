//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool  fun(int i,int sm , vector<int>&v , int &fsm,vector<vector<int>>&dp){
        if(sm==fsm) return 1;
        if(i<0) return 0;

        if(dp[i][sm]!=-1) return dp[i][sm];

            int a = fun(i-1 , sm+ v[i],v , fsm,dp);
            int b = fun(i-1 , sm ,v , fsm,dp);
            return dp[i][sm] = a || b;
    }

public:
    bool isSubsetSum(vector<int>v, int fsm){
        // code here 
        int n = v.size();



        int t_sm=0;
        for(int i = 0;i<n;i++)   += v[i];
        // vector<vector<int>> dp(n+1 , vector<int>(t_sm, 0));

        vector<vector<int>> dp(n , vector<int>(t_sm, -1));

        // return  fun(n-1 , 0,v,fsm,dp);


        

        
        
        for(int i=0;i<t_sm;i++) dp[0][i] = 0;
        
        dp[0][t_sm] = 1;


        for(int i=1;i<=n;i++){
            for(int sm = 0;sm<=t_sm;sm++){
                int a = dp[i - 1][sm + v[i]];
                int b = dp[i - 1][sm];
                dp[i][sm] = a || b;
            }
        }


        return dp[n][t_sm];


        

        // for(int i=0;i<dp.size();i++){
        //     for(int j=0;j<dp[0].size();i++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        



    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends