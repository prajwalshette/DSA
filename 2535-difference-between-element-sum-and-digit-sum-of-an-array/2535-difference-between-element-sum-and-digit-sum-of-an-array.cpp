class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
         int n = nums.size(), sumElement = 0, sumDigits = 0;
        for(int i = 0; i < n; i++){
            sumElement += nums[i]; // calculating sum of elements in nums
            int digits = nums[i]; 
            while(digits){
                sumDigits += digits%10; 
                digits = digits/10; // removing last digit
            }
        }
        return abs(sumElement-sumDigits);
        
    }
};