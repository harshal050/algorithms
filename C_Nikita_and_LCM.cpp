//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

    int fun(int i,int j,int n,int m,vector<vector<int>> &v,int &mx,vector<vector<int>> &dp){
        if(i<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=0;k<n-1;k++){
            if(k!=j){
               int a = v[i][k] + fun(i-1 , k,n,m,v,mx,dp);
                mx = max(a , mx); 
            }
        }
        
        return dp[i][j] = mx;
    }


    int  isSubsetSum(vector<vector<int>>&v,int n){
        int mx = -1;

        // vector<vector<int>> dp(n , vector<int>(n+1,-1));
        // return fun(n-1 , n , n,n,v,mx,dp);


        vector<vector<int>> dp(n , vector<int>(n+1,0));

        // for(int i=0;i<n;i++) dp[0][i] = 0;

        dp[0][0] = max(v[0][1] , v[0][2]);
        dp[0][1] = max(v[0][0] , v[0][2]);
        dp[0][2] = max(v[0][0] , v[0][1]);
        dp[0][3] = max(max(v[0][1] , v[0][2]) , v[0][0]);
        // cout<<dp[0][0]<<" "<<dp[0][1]<<" "<<dp[0][2]<<endl;

        // for(int i=0;i<n;i++) dp[1][i] = v[1][i] + dp[0][i];

        // int j=4;
        int j =3;
        for(int i=1;i<n;i++){
            for (int k = 0; k < n ; k++)
            {
                if (k != j)
                {
                    int a = v[i][k] + dp[i - 1][k];
                    mx = max(a, mx);
                }
                                    j =k;

            }
            dp[i][j] = mx;
        }
        return dp[n-1][j];

            
        }

        // cout<<dp[n][0]<<" "<<dp[n][1]<<" "<<dp[n][2]<<endl;

        // for(int i=0;i<dp.size();i++){
        //     for(int j=0;j<dp[0].size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


    


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> arr(N , vector<int>(N));
        for(int i = 0; i < N; i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        
        cout<<isSubsetSum(arr , N)<<endl;
    }
    return 0; 
} 

// } Driver Code Ends