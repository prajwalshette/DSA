 class Solution {
public:
vector<pair<int,int>>f,s;
void dfs(vector<vector<int>>&grid,int c,int i,int j){
    if(i<0 || j<0 || i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1){
        return;
    }
    grid[i][j]=c;
    if(c==2){
       f.push_back({i,j});
    }
   else{
       s.push_back({i,j});
    }
    dfs(grid,c,i+1,j);
    dfs(grid,c,i-1,j);
    dfs(grid,c,i,j+1);
    dfs(grid,c,i,j-1);
}
    int shortestBridge(vector<vector<int>>& grid) {
       
        int c = 2;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                dfs(grid,c,i,j);
                c++;}
            }
        }
        int ans  = 1000000;
        for(int i=0;i<f.size();i++){
          
            for(int j=0;j<s.size();j++){
                ans = min(ans,abs(f[i].first-s[j].first)+abs(f[i].second-s[j].second)-1);
            }
        }
        return ans;
    }
};