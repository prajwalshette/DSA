 class Solution {
public:
    long long int MOD = 1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int N = nums.size();
        int l = 0, h = N-1;
        int ans=0;
        
        vector<int> p(N,1);
        p[0]=1;
        for(int i=1;i<N;i++)
        p[i] = (p[i-1]*2)%MOD;

        sort(nums.begin(),nums.end());
        while(l<=h)
        {
            int req = nums[l] + nums[h];
            if(req>target)
            {
                h--;
            }
            else
            {
                ans += p[h-l];
                ans %= MOD;

                l++;
            }
        }

        return ans;
    }
};
        
  