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
        for(int i = 0;i<n;i++) t_sm += v[i];
        // vector<vector<int>> dp(n+1 , vector<int>(t_sm, 0));

        vector<vector<int>> dp(n , vector<int>(t_sm, -1));
        
        
        return  fun(n-1 , 0,v,fsm,dp);
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