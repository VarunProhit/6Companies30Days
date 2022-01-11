// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    int i,j,k;
	    for(i=0;i<n;i++)
	    sum+=a[i];
	    k=sum/2;
	    bool dp[n+1][sum+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=k;j++)
	        {
	            if(j==0)
	             dp[i][j]=true;
	             else if(i==0)
	             dp[i][j]=false;
	             else if(a[i-1]>j)
	              dp[i][j]=dp[i-1][j];
	              else
	              dp[i][j]= dp[i-1][j] || dp[i-1][j-a[i-1]];
	        }
	    }
	    int mindiff= INT_MAX;
	    for(i=k;i>=0;i--)
	    {
	        if(dp[n][i])
	        mindiff = min(abs(2*i-sum),mindiff);
	    }
	    return mindiff;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends