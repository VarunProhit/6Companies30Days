// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;;
    int s=0,eh=c-1,ev=r-1;
    int i,j,k,tr=0;
    // cout<<r<<c;
    while(tr<r*c)
    {
        for(i=s;i<=eh;i++)
         {
             ans.push_back(matrix[s][i]);
             tr++;
              if(tr==r*c)
           break;
         }
          if(tr==r*c)
           break;
         for(i=s+1;i<=ev;i++)
         { ans.push_back(matrix[i][eh]);
          tr++;
          if(tr==r*c)
          break;
         }
          if(tr==r*c)
           break;
         for(i=eh-1;i>=s;i--)
         { ans.push_back(matrix[ev][i]);
          tr++;
            if(tr==r*c)
          break;
         }
          if(tr==r*c)
           break;
          for(i=ev-1;i>s;i--)
          {ans.push_back(matrix[i][s]);
          tr++;
          if(tr==r*c)
          break;
          }
          s++;eh--;ev--;
          if(tr==r*c)
          break;
    }
    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends