class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        
        int res = 0;
        vector<int> state(n);
        dfs(0, res, 0, state, requests);
        return res;
    }
    
    void dfs(int i, int& res, int numReq, vector<int>& state, const vector<vector<int>>& requests){
        if(i == requests.size()){
            if(count(state.begin(), state.end(), 0) == state.size()) res = max(res, numReq);
            return;
        }        
        dfs(i+1, res, numReq, state, requests); //not pick
        state[requests[i][0]]--, state[requests[i][1]]++;
        dfs(i+1, res, numReq+1, state, requests); //pick
        state[requests[i][0]]++, state[requests[i][1]]--;
    }
        
    
};