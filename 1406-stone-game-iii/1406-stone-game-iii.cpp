class Solution {
public:
    int dp[50001][2];
    int solve(vector<int>& stoneValue, int si, bool isAlice){
        if(si>=stoneValue.size())return 0;
        if(dp[si][isAlice]!=-1)return dp[si][isAlice];
        int ans=INT_MIN;
        int points=0;
        if(isAlice){
            for(int i=si; i<stoneValue.size() && i<si+3; i++){
                points+=stoneValue[i];
                ans = max(ans,points+solve(stoneValue,i+1,false));
            }
            return dp[si][isAlice]=ans;
        }
        else{
            points=0; ans=INT_MAX;
            for(int i=si; i<stoneValue.size() && i<si+3; i++){
                points+=stoneValue[i];
                ans = min(ans,solve(stoneValue,i+1,true)-points);
            }
        }
        return dp[si][isAlice]=ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        int ans = solve(stoneValue,0,true);
        if(ans>0)return "Alice";
        if(ans<0)return "Bob";
        return "Tie";
    }
};