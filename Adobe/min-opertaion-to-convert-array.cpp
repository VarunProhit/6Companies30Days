// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
   int lis(vector<int> &v,int n)
   {
       
         
        if (v.size() == 0)  
            return 0;  
      
        vector<int> tail(v.size(), 0);  
        int length = 1; // always points empty slot in tail  
      
        tail[0] = v[0];  
          
        for (int i = 1; i < v.size(); i++)
        {  
      
            // Do binary search for the element in  
            // the range from begin to begin + length 
            auto b = tail.begin(), e = tail.begin() + length; 
            auto it = lower_bound(b, e, v[i]);  
                  
            // If not present change the tail element to v[i]  
            if (it == tail.begin() + length) 
                tail[length++] = v[i];  
            else   
                *it = v[i];  
        }  
      
        return length; 
   
     //  return ma;
   }
    int minInsAndDel(int a[], int b[], int N, int M) {
        // code here
        int i=0,j=1,cnt=0,m=0,l=0;
        vector<int> t;
        set<int> se;
        for(i=0;i<M;i++)
        {
            se.insert(b[i]);
        }
        for(i=0;i<N;i++)
        {
            if(se.find(a[i])!= se.end())
              t.push_back(a[i]);
        }
        if(t.size()>0)
       l = lis(t,t.size());
       m = N+M-2*l;
        return m;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends