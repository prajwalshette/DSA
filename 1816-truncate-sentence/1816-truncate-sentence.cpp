class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans;
        int p = k-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ' ')
            {
               ans.push_back(s[i]); 
            }
            else{
                 if(p != 0)
                 {
                  p--;
                  ans.push_back(' ');
                 }
                else{
                    break;
                }
               
            }
            
        }
        return ans;
    }
};