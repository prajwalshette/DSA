class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0;
        for(j = 0;j<t.length();j++)
        {
            if(s[i]==t[j])
                i++;
        }

        if(i<s.length())
            return false;
        return true;
        
    }
};