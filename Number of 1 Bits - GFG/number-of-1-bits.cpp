//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
       int count = 0; 
      string str;
      while(N){
      if(N & 1) // 1
        str+='1';
      else // 0
        str+='0';
        N>>=1; // Right Shift by 1 
     } 
     for(int i=0; i<str.size(); i++)
     {
        if(str[i] == '1')
        {
            count++;
        }
     }
     return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends