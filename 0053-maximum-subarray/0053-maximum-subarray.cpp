class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       /* 
        int maxSum = INT_MIN;
        int currSum = 0;
        int n =nums.size();
        
        for(int i=0;i<n;i++){
            currSum = max(currSum + nums[i], nums[i]);
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
        */
        
        // kadne's Algorithm
        int sum = 0;
        int maxi = nums[0];
        
        for(int i = 0; i<nums.size();i++){
            sum = sum + nums[i];
            
            maxi = max(maxi, sum);
            
            if(sum < 0)
                sum = 0;
        }
        return maxi;
    }
};