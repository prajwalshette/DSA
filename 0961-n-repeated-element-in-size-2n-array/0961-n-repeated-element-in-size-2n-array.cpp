class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int,int> m;
            int temp;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            
        }
        for (auto x : m){
         
         if(x.second > 1)
              return x.first;
         
     }
       return -1; 
         
        
    }
};