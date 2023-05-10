class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int cnt=0, pos=0;
        for (int i=0; i<mat.size(); i++){
            int curr=0;
            for (int j=0; j<mat[0].size(); j++){
                if (mat[i][j]==1)curr++;
            }
            if (curr>cnt){
                cnt= curr;
                pos= i;
            }
        }
        return {pos,cnt};
        
    }
};