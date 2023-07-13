class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
        map<int,int> m;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        
        unordered_set<int> s;
        for(auto x: m)
        {
           s.insert(x.second); 
        }
        
        return s.size() == m.size();
        
        
        
        
       /* 
        unordered_map<int,int>freq;
        for(auto x:arr)
        {
            freq[x]++;
        }
        unordered_set<int>s;
        for(auto x: freq)
        {
            s.insert(x.second);
            
        }
        
        */
        
        
    }
};