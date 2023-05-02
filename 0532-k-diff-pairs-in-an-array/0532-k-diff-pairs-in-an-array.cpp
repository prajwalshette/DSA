class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n= nums.size();
       
        sort(nums.begin(), nums.end());
        set<vector<int>>res;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k)
                    res.insert({nums[i], nums[j]});
            }
        }
         
        return res.size();
        
    }
};