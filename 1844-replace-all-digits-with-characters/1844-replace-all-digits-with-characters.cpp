class Solution {
public:
    string replaceDigits(string s) {
        
        string ans;
        int n = s.size();
        for(int i=0;i<n;i++){
		//If index even push back same character
            if(i%2 == 0){
                ans.push_back(s[i]);
            }
			//If odd then find the numeric value of present character and add the previous for increment
            else{
                ans.push_back(s[i]-'0'+s[i-1]);
            }
        }
        return ans;
    }
};