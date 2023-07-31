class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str="";
        
        for(int i=s.length()-1;i>=0;i--){
            str = str + s[i];
            if(s[i] == ' ' ){
                str.pop_back();
                st.push(str);
                str= "";
            }
            else if(i==0){
                
                st.push(str);
            }
        }
        string ans="";
        while(!st.empty()){
            if(st.size()==1){
                ans = ans + st.top();
            }
            else{
            ans = ans + st.top() + ' ';
            }
            st.pop();
        }
        
        return ans;
    }
};