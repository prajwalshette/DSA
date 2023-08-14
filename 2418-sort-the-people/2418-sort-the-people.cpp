class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int n = heights.size();
        vector<pair<int, string>> p;
        
        for(int i=0; i<n; i++)
        {
            p.push_back({heights[i], names[i]});
        }
        
        //sort pair in reverse ordder
        sort(p.rbegin(), p.rend());
       
        vector<string> ans;
        for(auto x : p)
        {
           ans.push_back(x.second); 
        }
        
        return ans;
    }
};