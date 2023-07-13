//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
       map<int,int> m;
       for(int i=0; i<n; i++)
       {
           m[arr[i]]++;
       }
       
       vector<int> ans;
       for(auto x: m)
       {
           if(x.second >=1)
           {
               ans.push_back(x.second);
           }
       }
       
       unordered_set<int> s;
       for (int i = 0; i < ans.size(); i++) {
          s.insert(ans[i]);
        }
       
        
        if(s.size() == ans.size())
          return true;
          
          
          return false;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends