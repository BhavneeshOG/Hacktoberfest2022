class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<vector<int>>&ans,vector<int>temp,int n)
    {
          if (node==n-1)
          {
              temp.push_back(node);
              ans.push_back(temp);
              return;
          }
        temp.push_back(node);
        for (auto it:adj[node])
        {
         dfs(it,adj,ans,temp,n);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        int n=graph.size();
      vector<vector<int>>ans;
        vector<int>temp;
        dfs(0,graph,ans,temp,n);
        return ans;
    }
};al
