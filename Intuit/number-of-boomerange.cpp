#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i=0; i<points.size(); i++){
            for(int j=0; j<points.size(); j++){
                if(i==j) continue;
                else {
                    int dist = (points[i][0] - points[j][0])*(points[i][0] - points[j][0])
                        + (points[i][1] - points[j][1])*(points[i][1] - points[j][1]);
                    mp[dist]++;
                }
            }
            for(auto x: mp){
                ans += x.second*(x.second-1);
            }
            mp.clear();
        }
        return ans;
    }
};
int main()
{

    vector<vector<int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int>u(2);
        cin>>u[0]>>u[1];
        v.push_back(u);
    }
    Solution ob;
    cout<<ob.numberOfBoomerangs(v);
return 0;
}