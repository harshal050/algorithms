//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

    int fun(int ind,int t, vector<int> &v,int sm,int &c,int d,int &p){
        
        if(t==0){
            return 1;
            
        }

        if(p==v.size()-1) return 0;

        if(ind>d){
            return 0;  
        }



        for(int i=0;i<v.size();i++){
           if(sm + v[i]<=t && p>i){
            if(fun(ind+1,t-v[i],v,sm+v[i],c,d,p)) c++;
            p=i;
           }
           
        }
        if(c==0) return -1;
        return c;   
    }

    

    int  isSubsetSum(vector<int>&v,int t){
        // code here 
        int n = v.size();
        int m = *min_element(v.begin() , v.end());
        int c=0;
        int d = t/m;
        int p = -1;
        return fun(n-1,t,v,0,c,d,p);

    }


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,m;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin>>m;
        
        cout<<isSubsetSum(arr,m)<<endl;
    }
    return 0; 
} 

// } Driver Code Ends