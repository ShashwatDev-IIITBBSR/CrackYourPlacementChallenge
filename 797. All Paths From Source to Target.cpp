class Solution {
public:
    void dfs(int val,vector<int> &dq,vector<vector<int>> &all_paths, vector<vector<int>>graph)
    {
        int v=graph.size()-1;
        dq.push_back(val);
        if(v==val)
        {
            all_paths.push_back(dq);
            dq.pop_back();
            return;
        }
        for(auto x:graph[val])
        {
            dfs(x,dq,all_paths,graph);
        }
        dq.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<vector<int>> all_paths;
        vector<int> path;
        vector<int> dq;
        int n=graph.size();
        vector<bool>visited(n,false);
        dfs(0,dq,all_paths,graph);
        return all_paths; 
    }
};
/*class Solution {
public:
    void dfs(int val,deque<int> &dq,vector<vector<int>> &all_paths, vector<vector<int>>graph)
    {
        int v=graph.size()-1;
        dq.push_back(val);
        if(v==val)
        {
            vector<int> vec;
            while(!dq.empty())//Using Deque
            {
                vec.push_back(dq.front());
                dq.pop_front();
            }
            int i,n;
            n=vec.size();
            for(i=0;i<n-1;i++)
            {
                dq.push_back(vec[i]);
            }
            all_paths.push_back(vec);
            return;
        }
        for(auto x:graph[val])
        {
            dfs(x,dq,all_paths,graph);
        }
        dq.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<vector<int>> all_paths;
        vector<int> path;
        deque<int> dq;
        int n=graph.size();
        vector<bool>visited(n,false);
        dfs(0,dq,all_paths,graph);
        return all_paths; 
    }
};*/