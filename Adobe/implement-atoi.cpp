// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int m = s.size(),i,ans=0,j=0;
        int p = pow(10,m-1);
        if(s[0]=='-')
        for(i=1;i<m;i++)
        {
          
            if(s[i]>='0'&&s[i]<='9')
            {
                
            }
            else j=1;
        }
        else 
        {
            for(i=0;i<m;i++)
           {
          
            if(s[i]>='0'&&s[i]<='9')
            {
                
            }
            else j=1;
           }
        }
        if(j)
        return -1;
        if(s[0]!='-')
        for(i=0;i<m;i++)
        {
            ans +=(s[i]-'0')*p;
            p/=10;
        }
        else
        {
            p/=10;
            for(i=1;i<m;i++)
        {
            ans +=(s[i]-'0')*p;
            p/=10;
        } 
        }
        if(s[0]=='-')
        return ans*(-1);
        
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends