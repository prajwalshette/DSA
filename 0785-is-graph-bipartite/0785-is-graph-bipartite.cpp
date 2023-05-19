class Solution {
public:
    bool getans(vector<vector<int>>& graph,int node,vector<int>&vis,int color, vector<int>&col)
    {
        vis[node]=1;
        col[node]=color;
        for(auto x:graph[node])
        {
            if(vis[x]==0)
            {
                if(getans(graph,x,vis,color^1,col)==false)
                    return false;
            }
            else
            {
                if(col[x]==color)
                    return false;
            }
        }
        return true;
    }
        
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int>vis(graph.size());
        vector<int>col(graph.size());
        for(int i=0;i<graph.size();i++)
        {
            if( vis[i]==0 && getans(graph,i,vis,0,col)==false )
                return false;
        }
        return true;
    }
};