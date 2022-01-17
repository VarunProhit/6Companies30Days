// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int numOfWays(int n, int x)
    {
        // code here
        long long int i,j,m;
        m = pow(n,1.0/x);
     
        long long int dp[n+1]={0};
        dp[0]=dp[1]=1;
        for(i=2;i<=m;i++)
        {
            int curr =pow(i,x);
            for(j=n;j>=curr;j--)
            dp[j]+=dp[j-curr];
        }
       return dp[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}
  // } Driver Code Ends