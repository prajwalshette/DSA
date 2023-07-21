class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        unordered_map<char,int> mpp;
    
    for(int i=0;i<s.size();i++){
        if(mpp[s[i]]==0){
            mpp[s[i]]=i+1;
        }
        else{
            if(distance[s[i]-'a'] != i-mpp[s[i]]){
                return false;
            }
        }
    }
    return true;
        
    }
};

 