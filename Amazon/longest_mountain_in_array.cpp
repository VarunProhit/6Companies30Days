#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i,j,cnt=0,n,ma=0,fl=0;
        n = arr.size();
        if(n<3)
            return 0;
        for(i=0;i<n-1;i++)
        {
            cnt=0;
            fl=0;
            if(arr[i]<arr[i+1])
            {
                j=i;
                while(arr[j]<arr[j+1])
                {
                    cnt++;
                    j++;
                    if(j==n-1)
                        break;
                }
                if(j<n-1)
                while(arr[j]>arr[j+1])
                {
                    fl=1;
                     cnt++;
                    j++;
                    if(j==n-1)
                        break;
                }
                i+=cnt-1;
            }
            if(cnt>0 && fl)
          ma = max(ma,cnt+1);
        }
        return ma;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto i=0;i<n;i++)
     cin>>v[i];
     Solution ob;
     cout<<ob.longestMountain(v);
    return 0;
}