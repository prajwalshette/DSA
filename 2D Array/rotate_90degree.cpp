// Rotate by 90 degree

#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
     void rotatedby90(vector<vector<int>>& matrix,int n)
    {
        //transpose of matrix
        //int n=matrix.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //interchange row 
        for(int i=0;i<n/2;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[n-1-i][j]);
            }
        }
       // return matrix;

    }

};