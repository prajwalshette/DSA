class Solution {
public:
    int dp[101][101];
    int solve(int s, int e, vector<int>& cuts, int l, int r){
        if(l > r) return 0;
        
        if(dp[l][r] != -1) return dp[l][r];
        
        int cost = 1e9;
        
        for(int i=l; i<=r; i++){
            int left_cost = solve(s, cuts[i], cuts, l, i-1);
            int right_cost = solve(cuts[i], e, cuts, i+1, r);
            int curr_cost = (e - s) + left_cost + right_cost;
            cost = min(cost,curr_cost);
        }
        
        return dp[l][r] = cost;
    }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return solve(0, n, cuts, 0, cuts.size()-1);
    }
};