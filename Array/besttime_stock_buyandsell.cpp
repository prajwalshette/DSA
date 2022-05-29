
// 121. Best Time to Buy and Sell Stock
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
        
    }
};


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int maxRight = prices[n-1];
//         int maxProfit=0;
//         for(int i=n-2;i>=0;i++){
//             maxRight=max(prices[i],maxRight);
//             maxProfit=max(maxProfit,maxRight-prices[i]);
//         }
        
//          return maxProfit;
        
//     }
// };




