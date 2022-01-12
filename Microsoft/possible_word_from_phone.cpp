// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> s(10);
        s[2] = "abc"; s[3]="def";s[4]="ghi";s[5]="jkl";s[6]="mno";s[7]="pqrs";
        s[8]="tuv";s[9]="wxyz";
        
        int i,j,k,sum=1;
        for(i=0;i<N;i++)
        {
            sum*= s[a[i]].size();
        }
       
        vector<string> ans(sum);
       
        j=0;
        for(i=0;i<N;i++)
        {  
             sum = sum/s[a[i]].size();
            int l=0;
            int siz = 0;
            while(1){
           for(j=0;j<s[a[i]].size();j++)
           {
               int temp=0;
              for(k=l;k<ans.size();k++)
              {
                  ans[k]+=s[a[i]][j];
                  temp++;
                  siz++;
                  if(temp==sum)
                  break;
                   
              }
              l+=sum;
           }
             if(siz==ans.size())
             break;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends