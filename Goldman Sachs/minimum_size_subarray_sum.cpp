#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j,k,cnt=0,ma=INT_MAX,n,sum=0;
        n = nums.size();
        k = target;
      
        for(i=0;i<n;i++)
            cnt+=nums[i];
        if(k>cnt)
            return 0;
        if(k==cnt)
            return n;
        for(i=0,j=-1;i<n;i++)
        {
            sum+=nums[i];
            if(sum>=k)
            {
                cnt= i-j;
                ma = min(ma,cnt);
            }
            if(sum>=k)
            {
                 while(j<i)
                {
                     j++;
                    sum = sum-nums[j];
                    //j++;
                     
                     if(sum<k)
                         break;
                     cnt= i-j;
                 ma = min(ma,cnt);
                }
            }         
        }       
        return ma;       
    }
};

int main()
{
    int target,n;
    cin>>n>>target;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    Solution obj;
    cout<<obj.minSubArrayLen(target,v);
  return 0;
}