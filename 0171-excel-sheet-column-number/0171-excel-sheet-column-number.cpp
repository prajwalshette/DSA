class Solution {
public:
    int titleToNumber(string columnTitle) {
        
//         int result = 0;
//        for(char c : columnTitle)
//         {

//           int d = c - 'A' + 1;
//           result = result * 26 + d;
//        }
//        return result;
        
        int result = 0;
        for(int i=0; i<columnTitle.size();i++)
        {
            int val = columnTitle[i] - 'A'+1;
            result = result*26 + val;
        }
        return result;
    }
};