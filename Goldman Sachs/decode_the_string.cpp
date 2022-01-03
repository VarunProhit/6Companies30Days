// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        int i=8,j,k,n,rep,val=1;
        n = s.size();
        j=1;
        if(s[1]=='[')
       {
           rep = s[0]-'0';
           k=2;
       }
        else
       {
           rep = (s[0]-'0')*10 + (s[1]-'0');
           k=3;
       }
        string ans;
        for(i=k;i<n;i++)
        {
            if(s[i]>'0' && s[i]<='9')
             {
                 if(s[i+1]>'0' && s[i+1]<='9')
                 {
                     val = (s[i]-'0')*10 +(s[i+1]-'0');
                     i++;
                 }
                 else
                 val = (s[i]-'0');
                 i++;
                 continue;
             }
             else if(s[i]>='a' && val>0)
             {
                 string temp;
                 while(s[i]>='a' && i<n )
                {
                    temp+=s[i];
                    i++;
                    if(i==n)
                    break;
                }
                while(val--)
                ans+=temp;
                i--;
                val=1;
             }
        }
        string an;
        while(rep--)
        an+=ans;
        return an;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends