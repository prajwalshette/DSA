class Solution {
public:
    
    int  HoursCalculate(vector<int>& piles,int k){
        
        int  NumberofHours = 0;
        
        for(int i = 0; i < piles.size(); i++)
        {
            if (piles[i] % k == 0)
            {
               NumberofHours += piles[i] / k;
            }
            else
            {
               NumberofHours += (piles[i] / k) + 1;
           }
        
        }
        return NumberofHours;
    }
    
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        int left = 1;
        int right = 1000000000;
        
        while(left < right)
        {
            int k= (left+right)/2;
            
            int NumberofHours = HoursCalculate(piles,k);
            
            if( NumberofHours > h)
            {
                left = k+1;
            }
            else
            {
                right = k;
            }
        }
        return left;
    }
};