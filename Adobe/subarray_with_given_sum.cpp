// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        int i=0,j=0;
        vector<int>ans;
        long long sum=0;
        for(i=0;i<n;i++)
        {  
            //  if(sum==s)
            //  break;
          
            sum+=a[i];
           // cout<<a[i]<<" ";
            if(sum>s)
            {
                while(sum>s && j<i)
                {
                    sum-=a[j];
                    j++;
                    
                }
            }
            if(sum==s)
             break;
        }
       
        if(sum==s)
          { ans.push_back(j+1);
          ans.push_back(i+1);
          }
           else
           ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends