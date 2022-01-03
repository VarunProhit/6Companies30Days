// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int i,j=0,strt,cnt=1;
        vector<pair<char,int>> v;
        for(i=0;i<S.size()-1;i++)
        {
            if(S[i]==S[i+1])
            cnt++;
            else
            {
                v.push_back(make_pair(S[i],cnt));
                cnt=1;
            }
        }
         v.push_back(make_pair(S[S.size()-1],cnt));
        strt=1;
        string ans;
        vector <int> num;
        for(i=1;i<=9;i++)
        num.push_back(i);
        int p1=0,ma=0;
        if(v[0].first=='I')
       {
           ans+=strt+'0';
           if(ma<strt)
           ma=strt;
       }
       else
       {
           strt= v[0].second +1;
           ans+=strt+'0';
            if(strt>ma)
              ma=strt;
       }
       
        for(i=0;i<v.size();i++)
        {
            int c=v[i].second;
           
            if(v[i].first=='I')
            {
                int m = ma+1;
                while(c>1)
                {
                    ans+=m+'0';
                    m++;
                    if(m>ma)
                    ma=m;
                    c--;
                }
                if(i<v.size()-1)
                 m += v[i+1].second;
                 if(m>ma)
                 ma=m;
                  ans+=m+'0';
            }
            else
            {
                int m = ma-1;
                while(c>0)
                {
                    ans+=m+'0';
                    m--;
                    c--;
                }
            }
        }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends