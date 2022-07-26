class Solution {
public:
    unordered_set<int>uset;
    int sum;
    void add_edge(vector<int>adj[],vector<int>t)
    {
        adj[t[0]].push_back(t[1]);
        if(!(uset.find(t[0])!=uset.end()))
        {
            uset.insert(t[0]);
            sum+=t[0];
        }
    }
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        sum=0;
        uset.clear();
        vector<int>adj[n+1];
        for(auto x:trust)
        {
            add_edge(adj,x);
        }
        int num=(n*(n+1))/2-sum;
        if(num<1||num>n){return -1;}
        for(int i=1;i<=n;i++)
        {
            if(i==num){continue;}
            int j=0;
            while(j<adj[i].size()&& adj[i][j]!=num){j++;}
            if(j==adj[i].size())
            {
                return -1;
            }
        }
        return num;
    }
};







