#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
     void dfs(vector<vector<int>>& isConnected, int i, int j){
        isConnected[i][j] = 0;
        for(int k=0; k<isConnected.size(); k++){
            if(isConnected[j][k]){
                    dfs(isConnected, j, k);
                }
        }
    } 
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]){
                    ans++;
                    dfs(isConnected, i, j);
                }
            }
        }
        return ans;
    }
};
int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
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
  auto a = ob.findCircleNum(v);
 cout<<a;
return 0;
}