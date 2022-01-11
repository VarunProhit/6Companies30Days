// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	int i,j,k;
	vector<string> ans;
	for(i=1;i<=N;i++)
	{
	    int t=i;
	    string m;
	    while(t)
	    {
	        m+=(t%2 +'0');
	        t/=2;
	    }
	    reverse(m.begin(),m.end());
	    ans.push_back(m);
	    
	}
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends