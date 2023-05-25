class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        
        // Edge Cases
        if(k == 0){
            return (double) 1;
        }
        else if(n >= k - 1 + maxPts){
            return (double) 1;
        }

        vector<double> dp(n + 1, 0.0);

        double probability = 0.0; // Probability of reaching N or less points
        double windowSum = 1.0; // Sliding window sum of previous maxPts probability
        dp[0] = 1.0; // Initially, Alice has 0 points with probability 1

        for(int i=1; i<=n; i++){
            dp[i] = windowSum/ maxPts; // Probability of getting points i
            if(i < k){
                windowSum += dp[i]; // Update window sum as long as i is less than k
            }
            else{
                probability += dp[i]; // Update probability once alice reaches
            }

            if(i >= maxPts){
                windowSum -= dp[i- maxPts]; // Remove the probability of sliding 
            }
        }

        return probability;

        
    }
};