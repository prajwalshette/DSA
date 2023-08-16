class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        
        unordered_map<char,int> map;
        for(char c:chars)
        {
            map[c]++;
        }
        int result = 0;
        for(int i = 0;i<words.size();i++)
        {
            if(funcheck(map,words[i]))
            {
                result += words[i].size();
            }
        }
        
        return result;
    }
    
    bool funcheck(unordered_map<char,int> map,string word)
    {
        for(char c:word)
        {
            if(map.find(c) != map.end())
            {
                map[c]--;
                if(map[c] == 0)
                {
                    map.erase(c);
                }
            }
            
            else
            {
                return false;
            }
        }
        
    return true;
        
    }
};