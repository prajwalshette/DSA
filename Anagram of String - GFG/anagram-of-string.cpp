//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    
    map<char,int>mp;
    int count = 0;
    for(auto i:str1) mp[i]++;
    for(auto j:str2) mp[j]--;
    
    // return  remaining element frequency
    for(auto k:mp) count += abs(k.second);
   
   return count;
}


//  for(auto i:str1) mp[i]++; //for sting str1
//b-1
//c-1
//a-1
//d-1
//e-1
//h-1

// for(auto j:str2) mp[j]--;  //for string str2 same element raha to 1 se 0 kar de
//b-1
//c-1
//a-0
//d-1
//e-0
//h-0

