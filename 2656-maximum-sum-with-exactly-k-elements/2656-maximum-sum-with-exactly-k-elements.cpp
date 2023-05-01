class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      
      int n = nums.size();
      sort(nums.begin(),nums.end());
      int sum = 0;
      while(k--)
      {
            sum += nums[n-1];
            nums[n-1] = nums[n-1]+1;
        }
       
      return sum;
    }
};