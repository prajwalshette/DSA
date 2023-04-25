class Solution {
public:
    int calculate(string s) {
        
        stack<int> st;
        int ans = 0;
        char sign = '+';
        
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]>='0' && s[i]<='9'){
                int val = 0;
                while(s[i]>='0' && s[i]<='9' && i<s.size()){
                    val = val * 10 + (s[i]-'0');
                    i++;
                }
                i--;
                if(sign == '/'){
                    int a = st.top();
                    st.pop();
                    int tmp = a/val;
                    st.push(tmp);
                }
                else if(sign == '*'){
                    int a = st.top();
                    st.pop();
                    st.push(a*val);
                }
                else if(sign == '+'){
                    st.push(val);
                }
                else if(sign == '-'){
                    st.push(val*(-1));
                }
            }
            else if(s[i] != ' '){
                sign = s[i];
            }
            
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();   
        }
        return ans;
    }
};