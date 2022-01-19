// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans;
        if(s[0]>='A'&&s[0]<='Z')
        ans+=s[0]+32;
        else
        ans+=s[0];
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]>='a'&& s[i]<='z')
            ans+=s[i];
            else
            {ans+=" ";
            ans+=s[i]+32;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends