// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n,i,j,sum=0;
        n = nums.size();
        for(i=0;i<n;i++)
        sum+=nums[i];
        if(sum%k != 0 || n%2 !=0)
          return false;
         map<int,int>f;
         for(i=0;i<n;i++)
          f[nums[i]%k]++;
         for(i=0;i<n;i++)
         {
             int r = nums[i]%k;
             
             if(2*r == k)
             {
                 if(f[r]&1 !=0)
                 return false;
             }
              else if(r==0)
             {
                 if(f[r]&1 !=0)
                 return false;
             }
             
             else if(f[r]!=f[k-r])
              return false;
            
         }
         return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends