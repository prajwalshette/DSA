class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
         int n=player1.size(), sum1=0, sum2=0,x1=0,x2=0;
        
        for(int i=0;i<n;i++){
            sum1+=player1[i];
            sum2+=player2[i];
            
            
            if(x1){
                x1--;
                sum1+=player1[i];
            }
            if(x2){
                x2--;
                sum2+=player2[i];
            }
            if(player1[i] == 10){
                x1=2;
                
            }
            if(player2[i] == 10){
                x2=2;
                
            }
        }
        if(sum1 > sum2)
            return 1;
        else if(sum1 < sum2)
            return 2;
        else
            return 0;
    }
};