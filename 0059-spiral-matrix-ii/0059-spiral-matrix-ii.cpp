class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));

        int dir=1;
        int left=0,right=n-1,top=0,bottom=n-1;
        int k=1;

        while(left<=right && top<=bottom)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                {
                    v[top][i]=k++;
                }
                dir=2;
                top++;

            }
            if(dir==2)
            {
               for(int i=top;i<=bottom;i++)
               {
                   v[i][right]=k++;

               }
               right--;
               dir=3;
            }
            if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v[bottom][i]=k++;
                }
                dir=4;
                bottom--;

            }
            if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v[i][left]=k++;
                }
                left++;
                dir=1;

            }
        }

       return v; 
    }
};