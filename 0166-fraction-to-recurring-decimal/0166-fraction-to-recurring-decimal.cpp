class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        
         string ans = "";

    if (!numerator) {
        return "0";
    }
    
    if (numerator > 0 ^ denominator > 0) {
        ans += '-';
             // if either numerator  or denominator is -ve
    }
    long num = labs(numerator),  den = labs(denominator); // changing both num & den into +ve.



   long q = num/den;
   long r = num%den;
   ans += to_string(q);

   if(r==0){
       return ans;

   }
   else{
       ans +=".";
   }
   unordered_map<int , int> map;
           

   while(r != 0){
       if(map.find(r) != map.end()){
           int len = map[r];
           ans.insert(len,"(");
           ans += ")";
        //Inserting ( at position when we first found that rem  and closing bracket at the last
           break;
       }
       else{
           map[r] = ans.size();
           r*=10;
           q = r/den;
           r = r%den;
           ans += to_string(q);
       }
   }
   return ans;
        
    }
};