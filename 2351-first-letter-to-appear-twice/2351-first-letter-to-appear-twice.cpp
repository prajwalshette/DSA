class Solution {
public:
    char repeatedCharacter(string s) {
        
        int n = s.size();
        map<char,int> m;
        char ans;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
            if(m[s[i]]==2)
            {
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};