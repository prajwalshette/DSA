class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        unordered_map<int,int> m;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        
        int max = INT_MIN, max1;
        for(auto x : m)
        {
            if(x.second > max)
            {
                max = x.second;
                max1 = x.first;
            }
        }
        return max1;
        
    }
};