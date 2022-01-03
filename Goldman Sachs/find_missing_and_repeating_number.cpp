// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int a[2],i,j,x=0,y=0,*b,c[n];
        for(i=0;i<n;i++)
        {
            c[i]= *arr;
            arr++;
        }
        sort(c,c+n);
        int v[n+1]={0};
        for(i=0;i<n;i++)
        v[c[i]]++;
        for(i=0;i<n-1;i++)
        {
            if(c[i]==c[i+1])
            x=c[i];
            if(v[i]==0 && i!=0)
            y=i;
            
        }
        if(v[n]==0)
        y=n;
        if(v[n-1]==0)
         y=n-1;
        a[0]=x;
        a[1]=y;
        b=a;
        return b;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends