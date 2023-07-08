class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;
        vector<int> revans;
        
         for(int i=0; i<nums.size(); i++)
        {
            int temp = nums[i];
            int rev = 0;
            while(temp != 0)
            {
                int rem = temp%10;
                rev = rev*10 + rem;
                temp = temp/10;
            }
             revans.push_back(rev);
        }
        
        for(int i=0; i<revans.size(); i++)
        {
         
            
            while(revans[i]!= 0)
            {
                int rem = revans[i]%10;
                ans.push_back(rem);
                revans[i] =revans[i]/10;
            }
            
            while(nums[i]%10==0){
               ans.push_back(0);
               nums[i] = nums[i]/10; 
            }
        }
        return ans;
        
    }
};