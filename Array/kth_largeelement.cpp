
//Kth Largest element in an array
#include<bits/stdc++.h>
using namespace std;

// Approch:01
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-k];
        
    }
};

// Approch:02
// 1.create maxHeap
// 2.Extract top element k time

class solution{
    public:
     int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int>pq(nums.begin(),nums.end());

         int ans = 0;
         while (k--)
         {
             ans = pq.top();
             pq.pop();
         }
         return ans;
     }

};

// Approch:03
// 1.Maintain min Heap of size k
// 2.Remove in top element and push
// 3.return pq.pop()

class solution{
    public:
      int findKthLargest(vector<int>& nums, int k){
          priority_queue<int, vector<int>, greater<int>>pq;
          for(auto x: nums){
              pq.push(x);
              if(pq.size() > k)
                pq.pop();
          }
          return pq.top();

      }
};

