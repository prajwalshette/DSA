class Solution {
    private:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        bool flag=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return flag;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxi=0;
       for(int i=0;i<nums.size();i++){
              bool flag1=isPrime(nums[i][i]);
              bool flag2=isPrime(nums[i][nums.size()-i-1]);
              if(flag1){
                  maxi=max(maxi,nums[i][i]);
              }
              if(flag2){
                  maxi=max(maxi,nums[i][nums.size()-i-1]);
              }
       }
    
       return maxi;
    }
};