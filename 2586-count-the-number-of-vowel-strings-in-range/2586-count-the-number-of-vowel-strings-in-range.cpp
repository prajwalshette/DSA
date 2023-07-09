class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        
        int count  = 0;
        for(int i=left; i<=right; i++)
        {
            string temp = words[i];
            int len = temp.size();
            
            if((temp[0]=='a' || temp[0] == 'e' || temp[0] == 'i' || temp[0] == 'o' || temp[0] == 'u') && (temp[len-1] == 'a' || temp[len-1] == 'e' || temp[len-1] == 'i' || temp[len-1] == 'o' || temp[len-1] == 'u') )
            {
               count++; 
            }
        }
        return count;
    }
};