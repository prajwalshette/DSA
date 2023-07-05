class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
         int prev = 0, curr = 0, ans = 0;
      for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
          if(curr == 0){
            prev = 0;
          }
          else{
            prev = curr;
            curr = 0;
          }
        }
        else curr++;
        ans = max(ans, prev + curr);
      }
      return ans == nums.size() ? ans - 1 : ans;
        
    }
};