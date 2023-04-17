class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        //first find max element 
        int maxi = 0;
        vector<bool> result;
        for(int i=0; i<candies.size(); i++)
        {
            if(maxi < candies[i])
            {
                maxi = candies[i];
            }
        }
        
        // step 2
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies >= maxi)
            {
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        
        return result;
    }
};