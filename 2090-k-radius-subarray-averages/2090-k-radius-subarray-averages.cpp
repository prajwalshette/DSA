class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        vector<int>ans;
        for(int i=0;i<k && i<nums.size();i++){
            ans.push_back(-1);
        }
        long long int sum=0;
        vector<long long int>sumi;
        sumi.push_back(0);
        for(int i=0;i<nums.size();i++){
         sum=sum+nums[i];
         sumi.push_back(sum);
        }
        for(int i=k;i<nums.size();i++){
            if(i+k<nums.size()){
                long int val=(sumi[i+k+1]-sumi[i-k])/(2*k+1);
                ans.push_back(val);
            }
            else ans.push_back(-1);
        }
        return ans;
        
    }
};