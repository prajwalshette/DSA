class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        
        int n = words.size();
        vector<string> rev;
        
        for(int i=0; i<n; i++)
        {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            rev.push_back(temp);
        }
        
        
        int count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(words[i] == rev[j] && i != j)
                {
                    count ++;
                }
            }
        }
        return count/2;
    }
};