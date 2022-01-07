// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        int i,j,k,cnt=0;
        vector<vector<string>> ans;
        
        for(i=0;i<s.size();i++)
        {
            unordered_set<string> temp;
             unordered_set<string>::iterator itr;
            vector<string> t;
            {
                for(j=0;j<n;j++)
                {
                    string x,y;
                    x.insert(0,s,0,i+1);
                    if(contact[j].size()>=i+1)
                    y.insert(0,contact[j],0,i+1);
                    // cout<<x<<y<<" ";
                    // break;
                    if(x==y)
                    temp.insert(contact[j]);
                }
            }
            for(itr=temp.begin();itr!=temp.end();++itr)
             t.push_back(*itr);
            sort(t.begin(),t.end());
            if(t.size()==0)
            t.push_back("0");
            ans.push_back(t);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends