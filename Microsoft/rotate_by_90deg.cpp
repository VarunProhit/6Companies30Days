// { Driver Code Starts
//Initial Template for C



#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
//User function Template for C
 

void rotate(int n,vector<vector<int>> &a)
{
    //code here
    int i,j,k,l;
    int b[n][n];
    k=0,l=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]= a[k][l];
            k++;
        }
        k=0;
        l--;
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=b[i][j];
        }
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t); 
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> a;
        for(int i=0; i<n; i++)
        {   vector<int>u(n);
            for(int j=0; j<n; j++)
              {
               cin>>u[j];
              }
            a.push_back(u);
        }
        rotate(n,a);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
               cout<<a[i][j];
            printf("\n");
        }
    }
    return 0;
}

  // } Driver Code Ends