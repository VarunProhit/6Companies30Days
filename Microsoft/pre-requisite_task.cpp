// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    // Code here
	    int i,j,p;
	    p=pre.size();
       vector<vector<int>> graph(n);
       vector<int> deg(n,0);
       for(auto c : pre)
       {
           graph[c.second].push_back(c.first);
           deg[c.first]++;
       }
       vector<int> v;
       queue<int> q;
       for(i=0;i<n;i++)
       {
           if(deg[i]==0)
           q.push(i);
       }
       while(!q.empty())
       {
           int curr=q.front();
           q.pop();
           v.push_back(curr);
           for(auto it:graph[curr])
           {
               deg[it]--;
               if(deg[it]==0)
               q.push(it);
               
           }
       }
       if(v.size()==n)
       return true;
       
       return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends