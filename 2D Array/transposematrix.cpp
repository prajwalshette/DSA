
// Transpose matrix

#include<bits/stdc++.h>
using namespace std;

// For square matrix
class solution
{
    public:
     vector<vector<int>> transpose(vector<vector<int>>& matrix){

         int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
    }

};

// for any matrix
// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
        
//         vector<vector<int>> ans(m,vector<int>(n));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 ans[j][i]=matrix[i][j]; 
//             }
//         }
//         return ans;
        
//     }
// };