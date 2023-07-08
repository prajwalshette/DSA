class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
    
        int n = patterns.size(), count = 0;
        for(int i = 0; i < n; i++)
        {
            string temp = patterns[i];
            int len = temp.length();
            
            // for each word in pattern, search it in word
            
            for(int j = 0; j < word.length(); j++)
            {
                if(temp == word.substr(j, len))
                {
                    count++;
                    break;
                }    
            }
        }       
        return count;
    }
};