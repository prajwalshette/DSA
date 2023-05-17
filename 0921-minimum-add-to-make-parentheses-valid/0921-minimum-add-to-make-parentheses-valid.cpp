class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>st;
		for(int i=0;i<s.size();i++)
		{
		if(s[i]=='(')st.push('(');
			else  //agr string "(" if me nhi chla to ")" else me chlega 
			{
				if(!st.empty() and st.top()=='(')st.pop(); //jb stack khali na  ho iska mtlb isme "(" ye present ho aur top per "(" ho aur apn ko ")" mil jae to apn "(" pop kr denge kyoki apn ko "( )" ye mil gya hai jo ki valid hai

				else st.push(')'); //ye ")" akela rh gya hai ab push hi krwa do isko bhi
			}
		}
		return st.size(); 
        
    }
};