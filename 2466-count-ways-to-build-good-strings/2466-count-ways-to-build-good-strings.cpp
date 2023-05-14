 class Solution {
public:
    int mod = 1000000007;
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1,-1);
        int sum=0;
        for(int i=low;i<=high;i++)
            sum=(sum%mod+count(dp,i,zero,one)%mod)%mod;
        return sum;
    }
    int count(vector<int>& dp,int high,int zero,int one)
    {
        if(high==0)
            return 1;
        if(high<0)
            return 0;
        
        if(dp[high]!=-1)
            return dp[high];
        
        int p = count(dp,high-zero,zero,one);
        int q = count(dp,high-one,zero,one);
        
        return dp[high] = (p+q)%mod;
    }
};