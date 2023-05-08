class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        vector<int> vec;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                vec.push_back(matrix[j][i]);
            }
            sort(vec.begin(),vec.end());
            for(int j=0;j<matrix.size();j++){
                if(vec[j]!=j+1)
                    return 0;
            }
            vec.clear();
        }

        for(int i=0;i<matrix.size();i++){
            sort(matrix[i].begin(),matrix[i].end());
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]!=j+1)
                    return 0;
            }
        }
        return 1;
        
    }
};