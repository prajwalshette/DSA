class Solution {
public:
    int minimizedStringLength(string s) {
        
        int n = s.size();
        string ans="";           
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(s[i]==s[j]){   
                    break;    
                }           
                
            }
            if(j==i){        
                ans+=s[i];   
            }               
        }
        return ans.size();
    }
};