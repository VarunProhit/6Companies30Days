// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    vector<pair<char,int>> v;
    int i,cnt=1;
    for(i=0;i<src.size()-1;i++)
    {
        if(src[i]==src[i+1])
        {
            cnt++;
        }
        else
        {
            v.push_back(make_pair(src[i],cnt));
            cnt=1;
        }
    }
    v.push_back(make_pair(src[i],cnt));
    string s;
    for(i=0;i<v.size();i++)
    {
        s.push_back(v[i].first);
        char c = v[i].second+'0';
        s.push_back(c);
        
     }
    return s;
  //Your code here 
}     
 
