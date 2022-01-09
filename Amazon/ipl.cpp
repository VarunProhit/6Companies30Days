// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> a, int n, int k) {
        // your code here
        int i=0,j=0;
        vector<int> v;
        priority_queue<pair<int,int>> pq;
         while(j < n){
            if(j-i+1 < k){
                pq.push({a[j],j});
                j++;
            }else{
                pq.push({a[j],j});
                int t = pq.top().first;

                v.push_back(t);
                while(!pq.empty()){
                    if(pq.top().second <= i){
                        pq.pop();
                    }else{
                        break;
                    }
                }
                i++,j++;
            }
        }
        return v;
    
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends