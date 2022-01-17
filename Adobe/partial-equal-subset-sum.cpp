// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int a[])
    {
        // code here
        sort(a,a+n);
        int i,j,sum=0;
        for(i=0;i<n;i++)
        sum+=a[i];
        if(sum%2 !=0)
        return 0;
     
        bool dp[n+1][sum+1];
         dp[0][0]=true;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(i==0 && j>0)
                dp[i][j]=false;
                else if(j==0)
                dp[i][j]=true;
                else if(a[i-1]<=j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
                else
                 dp[i][j]=dp[i-1][j];
                
            }
        }
        if(dp[n][sum/2])
        return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends