class Solution {
public:
    int addMinimum(string word) {
        
        int n = word.size(), i = 0, res = 0;
        
        while(i < n) {
            int count = 0;
            
            if(word[i] == 'a') {
                count++;
                i++;
            }
             
            if(word[i] == 'b') {
                count++;
                i++;
            }
            
            if(word[i] == 'c') {
                count++;
                i++;
            }
            
            res += 3 - count;
        }
        
        return res;
        
    }
};