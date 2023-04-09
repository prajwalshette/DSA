//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
     
    int maxcount = 0;
    char temp;
    for(int i = 0; i<str.length(); i++)
    {
        int count  = 0;
        for(int j = i; j<str.length(); j++)
        {
            if(str[i] == str[j]){
                count++;
            }
        }
        
        if(count>maxcount){
            maxcount = count;
            temp = str[i];
        }
        else if(count==maxcount){
            temp = min(temp,str[i]);
        }
    }
    
    return temp ;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends