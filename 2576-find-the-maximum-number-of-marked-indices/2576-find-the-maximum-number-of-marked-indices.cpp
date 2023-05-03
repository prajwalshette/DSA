class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        
        int i=0,j=(nums.size()+1)/2;
        while(j<nums.size()){
            if(nums[i]*2<=nums[j]){
                ans++;
                i++;
            }
            j++;
        }
        return ans*2;
        
    }
};