class Solution {
public:
    void bfs(int node, unordered_map<int,list<int>> adj,unordered_map<int,bool> &visited)
    {
        visited[node] = 1;
        for(auto i:adj[node])
            if(!visited[i])
                bfs(i,adj,visited);
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        unordered_map<int,list<int>> adj;

        for(int i=0;i<v;i++)
            for(int j=0;j<v;j++)
                if(isConnected[i][j]==1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }

        unordered_map<int,bool> visited;

        int count=0;

        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                count++;
                bfs(i,adj,visited);
            }
        }
 
        return count;
    }
};