// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n = string_list.size(),i;
        vector<pair<string,int>> dup;
        for(i=0;i<n;i++)
        {
            dup.push_back(make_pair(string_list[i],i));
        }
          for(i=0;i<n;i++)
        {
           string s = dup[i].first;
           sort(s.begin(),s.end());
           dup[i].first = s;
        }
        vector<vector<string>> ans;
        sort(dup.begin(),dup.end());
      
        for(i=0;i<dup.size();i++)
        {
            vector<string> v;
            v.push_back(string_list[dup[i].second]);
            if(i<dup.size()-1)
            {
            while(1)
            {
                if(dup[i].first==dup[i+1].first)
              {  i++;
              v.push_back(string_list[dup[i].second]);
              }
              else
              {
                  break;
              }
              
            }
            
            }
            ans.push_back(v);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;