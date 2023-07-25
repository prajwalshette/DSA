class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
       unordered_map<int,int> umap;
       for(int i=0; i<nums.size(); i++)
       {
         umap[nums[i]]++;  
       }
         // [&] (int a, int b) {return Expression}  //lamda function
       sort(nums.begin(),nums.end(), [&](int a, int b){
           return umap[a] != umap[b] ? umap[a] < umap[b]: a > b; });
       
        
       return nums; 
    }
};