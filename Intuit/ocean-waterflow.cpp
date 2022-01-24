#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
     void dfsOcean(int i, int j, int prev, vector<vector<int>>& heights, vector<vector<bool>>&ocean)
    {
        int m= heights.size(), n= heights[0].size();
        
        // if we are out of bounds or its height is lesser than prev cell and water can't flow
        if(i<0 || i>=m || j<0 || j>=n || prev>heights[i][j])
            return;
        
        //water can already flow from that cell probably to other direction
        if(ocean[i][j]==true)
            return;
        
        // otherwise we'll mark that water can flow from here to prev 
        ocean[i][j]= true;
        
        // and make travel further 4 directionally
        dfsOcean(i+1,j,heights[i][j],heights,ocean);
        dfsOcean(i-1,j,heights[i][j],heights,ocean);
        dfsOcean(i,j+1,heights[i][j],heights,ocean);
        dfsOcean(i,j-1,heights[i][j],heights,ocean);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int m= heights.size(), n= heights[0].size();
        vector<vector<int>> ans;
        vector<vector<bool>>pacific(m, vector<bool>(n,false));
        vector<vector<bool>>atlantic(m, vector<bool>(n,false));
               
        
        // DFS for left and right edges
        for(int i=0; i<m; i++)
        {
            dfsOcean(i,0,heights[i][0],heights,pacific);
            dfsOcean(i,n-1,heights[i][n-1],heights,atlantic);
        }
        
        // DFS for top and bottom edges
        for(int j=0; j<n; j++)
        {
            dfsOcean(0,j,heights[0][j],heights,pacific);
            dfsOcean(m-1,j,heights[m-1][j],heights,atlantic);
        }
        
        // cells from which water can flow to both Pacific and Atlantic oceans
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                    ans.push_back({i,j}); 
                   
            }
        }
        return ans;
    }
};
int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>> v;
  for(int i=0;i<n;i++)
  {
      vector<int> e(m);
      for(int j=0;j<m;j++)
       cin>>e[i];
       v.push_back(e);
  }
  Solution ob;
  auto a = ob.pacificAtlantic(v);
  for(auto i:a)
  {
      for(auto j :i)
       cout<<j;
  }
return 0;
}