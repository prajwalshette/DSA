class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int i, j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j == i || j == n-i-1)
                {
                    // checking for diagonal's elements
                    if(grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    // checking for other elements
                    if(grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};