// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string a){
		    // Code here
		    int v[26]={0},i,j;
		    vector<char> u;
		    char r;
		    string ans;
		    ans+= a[0];
		    v[a[0]-'a']++;
		    r = a[0];
		    for(i=1;i<a.size();i++)
		    {
		        v[a[i]-'a']++;
		        if(v[a[i]-'a']==1)
		        u.push_back(a[i]);
		        if(v[r-'a']==1)
		         ans+=r;
		        else 
		        { 
		            for( j=0;j<u.size();j++)
		            {
		                if(v[u[j]-'a']==1)
		                {
		                    r=u[j];
		                    break;
		                }
		            }
		            if(j==u.size())
		            ans+='#';
		            else
		            ans+=r;
		        }
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends