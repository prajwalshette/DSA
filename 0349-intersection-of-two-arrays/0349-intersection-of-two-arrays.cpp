class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> snums1(nums1.begin(), nums1.end());
        set<int> snums2(nums2.begin(), nums2.end());
        
        vector<int> output;
        for (auto n : snums1) {
            if (snums2.find(n) != snums2.end())
                output.push_back(n);
        }
        return output;
        
    }
};

 