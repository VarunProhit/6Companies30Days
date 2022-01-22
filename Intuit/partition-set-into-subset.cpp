// A Recursive C++ program to solve minimum sum partition
// problem.
#include <bits/stdc++.h>
using namespace std;
// Returns minimum possible difference between sums
// of two subsets
int findMin(int arr[], int n)
{
	// Compute total sum of elements
	int sumTotal = 0,ans,i,j,k;
	for (int i = 0; i < n; i++)
		sumTotal += arr[i];
    int sum = sumTotal/2;
    bool dp[n+1][sum+1];
    for(i=0;i<=n;i++)
    {
       for(j=0;j<=n;j++)
       {
           if(i==0 && j>0)
            dp[i][j] = false;
            else if(j==0)
            dp[i][j]=true;
            else if(arr[i]<=j)
            dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i]];
            else 
            dp[i][j] = dp[i-1][j]; 
       }
    }
    for(i=sum;i>=0;i--)
    {
        if(dp[n][i])
        { k = abs(sumTotal - 2*i);
         ans =k;
         break;
        }
    }
	// Compute result using recursive function
	return ans;
}

// Driver program to test above function
int main()
{
	int arr[] = { 3, 1, 4, 2, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The minimum difference between two sets is "
		<< findMin(arr, n);
	return 0;
}
