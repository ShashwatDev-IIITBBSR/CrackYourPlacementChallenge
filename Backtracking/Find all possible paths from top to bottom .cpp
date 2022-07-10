class Solution
{
public:
   vector<vector<int>> res;
   void recursion(vector<vector<int>> &grid,int i,int j,vector<int> vec,int n,int m)
   {
       if(i>=n||j>=m){return;}
       vec.push_back(grid[i][j]);
       if(i==n-1&&j==m-1)
       {
           res.push_back(vec);
           return;
       }
       recursion(grid,i+1,j,vec,n,m);
       recursion(grid,i,j+1,vec,n,m);
   }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<int> v;
        recursion(grid,0,0,v,n,m);
        return res;
    }
};