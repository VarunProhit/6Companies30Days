// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
      bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
  return (a.second < b.second);
}
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
       
       vector<string> te;
       for(int i=0;i<n;i++)
       te.push_back(arr[i]);
       sort(te.begin(),te.end());
        vector<pair<string,int>> v;
        int cnt=1,i;
        for(i=0;i<n-1;i++)
        {
            if(te[i]==te[i+1])
            cnt++;
            else
            {
                v.push_back({te[i],cnt});
                cnt=1;
                
            }
        }
        v.push_back({te[n-1],cnt});
        sort(v.begin(),v.end());
        vector<string> ans;
        int j=0;
        j=v.size()-1;
        int ma=0;
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i].second>ma)
             ma=v[i].second;
        }
        
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i].second==ma)
             j=i;
            
        }
        ans.push_back(v[j].first);
        string a = to_string(v[j].second);
        ans.push_back(a);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends