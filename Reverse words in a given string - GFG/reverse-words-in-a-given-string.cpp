//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<char>s;
       string str="";
       for(int i=0;i<S.size();i++){
           if(S[i]!='.' && i<S.size() ){
               s.push(S[i]);
           }
           else{
               while(!s.empty()){
                   str+=s.top();
                   s.pop();
               }
               str+='.';
           }
       }
      //for the last word
      while(!s.empty()){
          str+=s.top();
          s.pop();
      }
       reverse(str.begin(),str.end());
       return str; 
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends