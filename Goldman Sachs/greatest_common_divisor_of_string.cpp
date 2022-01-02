#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s,s1,s2;
        int i,j,k;
        if(str1.size()>=str2.size())
        {
            s1=str1;
            s2=str2;
        }
        else
        {
            s1=str2;
            s2=str1;
        }
        i=j=k=0;
        j=k=1;
        i = s1.size();
        j = s2.size();
        k = s2.size();
       while(1)
       {
           if(i%k==0 && j%k==0 && k<= s2.size())
           {
               s.insert(0,s2,0,k);
               break;
           }
           else
               k--;
       }
        string t,v,u;
        int l,m;
        l = i/k;
        m=j/k;
        while(l--)
        {
           t+=s; 
            //j/=2;
        }
        while(m--)
            u+=s;
        if(t==s1 && u==s2)
        return s;
        
        return v;
            
        
    }
};

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    Solution obj;
    cout << obj.gcdOfStrings(s1,s2)<< endl;
    return 0;
}