class Solution {
public:
    bool isPalindrome(int x) {
     
        int y=x;
        if(x<0)
            return false;
            
        long int rev=0;
        while(y)
        {
            rev = rev*10 + y%10;
            y/=10;
        }
        if(rev == x)
            return true;
        else
            return false;
     
    }
};