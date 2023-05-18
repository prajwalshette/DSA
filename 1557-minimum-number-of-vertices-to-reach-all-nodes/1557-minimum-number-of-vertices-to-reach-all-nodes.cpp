class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
     vector<bool> temp(n,false);
     for(auto val : edges)
     {
         temp[val[1]]=true;
     }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(temp[i]==false)
        ans.push_back(i);
    }
    return ans;
    }
};