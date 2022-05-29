
// 287. Find the Duplicate Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        int slow=arr[0];
        int fast=arr[0];
        
        do{
            slow=arr[slow];
            fast=arr[arr[fast]];
            
        }while(slow != fast);
        
        
        fast=arr[0];
        while(slow!=fast){
            slow=arr[slow];
            fast=arr[fast];
        }
        
        return slow;
        
       // int ans = 0;
        
         
         
         //XOR ing all array element
//         for(int i=0;i<arr.size();i++){
//             ans = ans^arr[i];
            
//         }
        
//         //XOR [1,n-1]
//         for(int i=0;i<arr.size();i++){
//             ans = ans^i;
//         }
//         return ans;
            
    }
};