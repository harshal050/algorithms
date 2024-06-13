//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++


    bool  fun(int i,int sm , vector<int>&v , int &fsm,vector<vector<int>>&dp){
        if(sm==fsm) return 1;
        if(i<0) return 0;

        if(dp[i][sm]!=-1) return dp[i][sm];

            int a = fun(i-1 , sm+ v[i],v , fsm,dp);
            int b = fun(i-1 , sm ,v , fsm,dp);
            return dp[i][sm] = a || b;
    }

    bool  fun2(int i,int t , vector<int>&v ,vector<vector<int>>&dp){
        if(t==0) return 1;
        if(i<0) return 0;

        if(dp[i][t]!=-1) return dp[i][t];
        int a;
        if(t-v[i]>=0) a = fun2(i-1 , t-v[i],v,dp);
        int b = fun2(i-1 , t ,v ,dp);
            return dp[i][t] = a || b;
    }
    
    bool isSubsetSum(vector<int>v, int fsm){    
        // code here 
        int n = v.size();   
        
            
        
        int t_sm=0;
        for(int i = 0;i<n;i++) t_sm += v[i];

        vector<vector<int>> dp(n+1 , vector<int>(t_sm+1, -1));
        for(int i=0;i<=t_sm;i++) dp[0][i] = 0;
        
        fun2(n-1 , t_sm,v,dp);
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }



    }

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
        
        cout <<isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends