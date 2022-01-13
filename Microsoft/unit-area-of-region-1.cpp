// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int dfs(vector<vector<int>>& grid,int i,int j,int r,int c)
    {
        if(i < 0 || j < 0 || i > (r - 1) || j > (c - 1) || grid[i][j] != 1)
         return 0;
        
        if(grid[i][j]==0)
           return 0;
            grid[i][j]=0;
          return 1+ 
             +dfs(grid,i,j-1,r,c)
             +dfs(grid,i,j+1,r,c)
              +dfs(grid,i-1,j-1,r,c)
             + dfs(grid,i-1,j+1,r,c)
            +dfs(grid,i-1,j,r,c)
             + dfs(grid,i+1,j+1,r,c)
             +dfs(grid,i+1,j,r,c)
             +dfs(grid,i+1,j-1,r,c);
              
        
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int r=grid.size();
        int c = grid[0].size();
        //int dp[n+1][m+1];
        int i,j,k,ma=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                   ma = max(dfs(grid,i,j,r,c),ma);
                }
            }
        }
        return ma;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends