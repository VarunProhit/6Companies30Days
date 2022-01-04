// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
//int b[10];
 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int *max_numbers(int *a,int n) {
        // code here
        sort(a,a+n);
        int j=0;
        int i = n-1,cnt=10;
       int *b = new int(10);
        while(cnt--)
        {
           b[j]=a[i];
           i--;
           j++;
        }
      return b;   
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
   int a[t];
   for(int i=0;i<t;i++)
   cin>>a[i];
    Solution ob;
        auto ans = ob.max_numbers(a, t);
        for(auto i=0;i<10;i++)
        {
         cout<<ans[i]<<" ";
        }

}  // } Driver Code Ends