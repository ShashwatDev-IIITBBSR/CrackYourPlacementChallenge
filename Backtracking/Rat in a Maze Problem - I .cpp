class Solution{
    public:
    vector<string> vec;
    bool ispathpossible(vector<vector<int>> m,int n,int row,int col)
    {
        if(row<0||col<0||row>=n||col>=n||(m[row][col]==0)){return false;}
        return true;
    }
    void dfs(vector<vector<int>> m,int n,int row,int col,string s)
    {
        if((row==(n-1))&&(col==(n-1))){vec.push_back(s);return;}
        if(m[row][col]==0){return;}
        m[row][col]=0;
        if(ispathpossible(m,n,row-1,col)){dfs(m,n,row-1,col,s+"U");}
        if(ispathpossible(m,n,row+1,col)){dfs(m,n,row+1,col,s+"D");}
        if(ispathpossible(m,n,row,col-1)){dfs(m,n,row,col-1,s+"L");}
        if(ispathpossible(m,n,row,col+1)){dfs(m,n,row,col+1,s+"R");}
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        string s="";
        dfs(m,n,0,0,s);
        return vec;
    }
};