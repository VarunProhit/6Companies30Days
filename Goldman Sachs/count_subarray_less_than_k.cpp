// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long sum=0,cnt=0,d=0,i;
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(sum+a[i] <k)
            {
               sum+=a[i]; 
               d += 1 + cnt;
               cnt++;
               cout<<cnt<<" "<<d<<"\n";
               
            }
            else
            {
                ans+=d;
                d=cnt=1;
                sum=a[i];
            }
        }
        if(d!=0)
        ans+=d;
        else if(a[n-1]<k)
        ans++;
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends