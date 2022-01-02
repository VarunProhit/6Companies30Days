// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	
ull getNthUglyNo(int n) {
	    ull ugly[n]; // To store ugly numbers
	    ull i2 = 0, i3 = 0, i5 = 0;
	    ull t= 2;
	    ull th = 3;
	    ull f = 5;
	    ull nxt = 1;

	    ugly[0] = 1;
	    for (int i = 1; i < n; i++) {
	       nxt= min(t, min(th, f));
	        ugly[i] = nxt;
	        if (nxt== t) {
	            i2 = i2 + 1;
	            t= ugly[i2] * 2;
	        }
	        if (nxt == th) {
	            i3 = i3 + 1;
	            th = ugly[i3] * 3;
	        }
	        if (nxt == f) {
	            i5 = i5 + 1;
	            f = ugly[i5] * 5;
	        }
	    } /*End of for loop (i=1; i<n; i++) */
	    return nxt;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends