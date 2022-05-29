
// 26. Remove Duplicates from Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int n=arr.size();
        
        if(n == 0)
        {
            return 0;
        }
        
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[j] != arr[i])
            {
                i++;
                arr[i] = arr[j];
            }
               
        }
        return i+1;
    }
};