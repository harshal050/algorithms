//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

        int  fun(int ind , int t , int v[] , vector<vector<int>> &dp,int mt, int &c){
            // cout<<<<" "<<"in "<<ind<<endl;
           
            if(t==0) return 1;
            if(ind==0){
                if(v[ind]==t) return 1;
                else return 0;
            } 
            
            
            

            if(dp[ind][t]!=-1) return dp[ind][t];
            // cout<<sm<<" "<<"in "<<ind<<endl;
            
            int a = fun(ind-1, t , v,dp,mt,c);
            int b = 0;
            if(t>=v[ind]){
                b = fun(ind-1, t-v[ind] , v,dp,mt,c);
            }
            
            return  dp[ind][t] = a+b;
        }
        


	int perfectSum(int v[], int n, int t)
	{
        // Your code goes here
            int sm=0;
            // for(int i=0;i<n;i++) sm+=v[i];
            
                
            vector<vector<int>> dp(n , vector<int>(t+1, -1));
              int c=0;
              
             return fun(n-1,t,v,dp,t,c);

	}
	  
//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    // Solution ob;
	    cout << perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends