class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = 0;
        for(int i=0; i<sentences.size(); i++)
        {
            string ch = sentences[i];
            int count = 0;
            for(int j=0; j<ch.length(); j++)
            {
                if(ch[j] == ' ' && ch[j+1] != ' ')
                {
                    count++;
                }
            }
            maxi = max(maxi, count);
        }
        return maxi+1;
    }
};