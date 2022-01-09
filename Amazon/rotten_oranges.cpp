#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int i,j,n,emp=0,fl=0;
        queue<pair<pair<int,int>,int>> v;
        for(i=0;i<grid.size();i++)
        {
           for(j=0;j<grid[i].size();j++)
               
           {
              if(grid[i][j]==2)
                  v.push({{i,j},0});
               else if(grid[i][j]==0)
                   emp++;
           }
        }
        
        int rotten=0,time=0;
        int dx[]={-1,1,0,0}, dy[]={0,0,1,-1},nx,ny,x,y;
         pair<pair<int,int>,int> p;
        while(!v.empty())
        {
           p = v.front();
            time = p.second;
            x=p.first.first;
            y = p.first.second;
            v.pop();
            rotten++;
            for(i=0;i<4;i++)
            {
              nx= x+dx[i];
                ny=y+dy[i];
                if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    v.push({{nx,ny},time+1});
                }
            }
        }
        if(rotten+emp != grid.size()*grid[0].size())
            return -1;
        
           return time;
    }
};

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    vector<vector<int>> v;
    vector<int> t(m);
    for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         cin>>t[j];
         v.push_back(t);
     }
     Solution ob;
     cout<<ob.orangesRotting(v);
    return 0;
}