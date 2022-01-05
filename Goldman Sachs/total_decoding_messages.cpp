// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int i,j,ans=1,cnt=0,fl=1;
		    int n = str.size();
		    int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    if(str[0]=='0')
		    fl=0;
		    int d = 1e9+7;
		    for(i=1;i<str.size();i++)
		    {
		        int k = (str[i-1]-'0')*10 + (str[i]-'0');
		        if(str[i]=='0')
		         dp[i+1]=dp[i];
		        else if(k<=26 && str[i+1]!='0' && k>10)
		        {
		           
		            dp[i+1]=((dp[i-1]%d)+(dp[i]%d))%(d);
		            
		        }
		         else
		        dp[i+1]=dp[i];
		        if(k%10 == 0 && k>20)
		         fl=0;
		        if(str[i-1]=='0' && str[i]=='0')
		        fl=0;
		    }
		    if(fl)
		    return dp[n];
		    return 0;
		}
  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends