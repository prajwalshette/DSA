class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int> ans;
        vector<pair<int,int>> v;
         
         for(int i=0; i<arr.size(); i++)
         {
             int a = arr[i];
             int count = 0;
             while (a) {
                if (a & 1)
                    count += 1;
                a = a >> 1;
            }
             v.push_back({count, arr[i]});
             
        }
        
        sort(v.begin(), v.end());
        for(auto x: v)
        {
            ans.push_back(x.second);
        }
        
        return ans;
    }
};