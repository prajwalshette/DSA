 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
         int n = nums.size();
        
        vector<vector<int>> res;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < n-2; i++)
        {
            int start = i + 1;
            int end = n - 1;
            
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            while(start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                
                if(sum == 0)
                {
                    res.push_back({nums[i],nums[start],nums[end]});
                    
                    while(start < end && nums[start] == nums[start + 1])
                    {
                        start++;
                    }
                    while(start < end && nums[end] == nums[end - 1])
                    {
                        end--;
                    }
                    start++;
                    end--;
                }
                else if(sum > 0)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        return res;  
    }
};