// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

int dp[1002][1002];
class Solution {
public:
    int fun(vector<int>&a,int start,int end)
    {
	    if(start>end){
	         return 0;
	    }
	    if(dp[start][end]!=-1){
	        return dp[start][end];
	    }
	    int aa= a[end] + min(fun(a,start+1,end-1),fun(a,start,end-2));
	    int bb= a[start]+min(fun(a,start+2,end),fun(a,start+1,end-1));
	    
	    (dp[start][end]=max(aa,bb));
	    return dp[start][end];
    }

    int maxCoins(vector<int>&A,int n)
    {
	    for(int i=0;i<1001;i++)
	    {
		    for(int j=0;j<1001;j++)
		    dp[i][j]=-1;
	    }
	    return fun(A,0,n-1);
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends