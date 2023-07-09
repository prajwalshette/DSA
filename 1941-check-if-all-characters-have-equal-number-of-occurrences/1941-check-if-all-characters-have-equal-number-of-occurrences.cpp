class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
    unordered_map<char, int> m;
    for (int i=0; i<s.size(); i++)
    {
      m[s[i]]++;
    }
        
      int res = m.begin()->second;
      for(auto & i: m){
          if(i.second!=res)return false;
      }
    return true; 
    }
};