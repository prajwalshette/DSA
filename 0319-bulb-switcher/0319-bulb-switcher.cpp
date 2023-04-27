class Solution {
public:
    int bulbSwitch(int n) {
        
        int count=0,sum=0;
        for(int i=1; i<=n; i+=2)
        {
            sum = sum + i;
            if(n<sum)
            {
                break;
            }
            count++;
        }
        return count;
    }
};