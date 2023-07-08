class Solution {
public:
    string freqAlphabets(string s) {
        
         map<int,char>m;
       char alpha='a';
       for(int i=1;i<=9;i++){
         m[i]=alpha;
         alpha++;
       }
       alpha='j';
       for(int i=10;i<=26;i++){
           m[i]=alpha;
           alpha++;
       }

        vector<int>v;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]=='#'){
                int num1=s[i-2]-'0';
                int num2=s[i-1]-'0';
                int num=num1*10+num2;
                v.push_back(num);
                i=i-3;
                
            }
            else{
                v.push_back(s[i]-'0');
                i--;
            }
        }
        reverse(v.begin(),v.end());
        string ans;
        for(int i=0;i<v.size();i++){
            ans.push_back(m[v[i]]);
        }
        return ans;
        
    }
};