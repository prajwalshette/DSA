class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int dp[n];

        for(int i = n-1; i>=0; i--)
        {
            // Option 1 - get a one day pass
            int opOne = costs[0] + (i < n-1 ? dp[i+1] : 0);
            int j;
            
            // Option 2 - get 7 day pass
            for(j = i+1; j < n && days[j] < days[i] + 7; j++);  // single line for loop to get past elements that are in next 7 days and have cost already covered by this pass
            int opTwo = costs[1] + (j < n ? dp[j] : 0);

            //Option 3 - get 30 day pass
            //    Notice that same var j is used since elements that had days upto next 7 days have been iterated, now we need to go till 30
            for(; j < n && days[j] < days[i] + 30; j++);
            int opThree = costs[2] + (j < n ? dp[j] : 0);

            dp[i] = min(opOne, min(opTwo, opThree));
        }
        
        return dp[0];
    }
};