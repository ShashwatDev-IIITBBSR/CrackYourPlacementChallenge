class Solution{
public:
    bool isIsland(int n, int m, vector<vector<char>> &mat,int row,int col)
    {
        if(row>=n or row<0 or col<0 or col>=m){return false;}
        if(mat[row][col]=='X'){return true;}
        //mat[row][col]='X';
        //return isIsland(n,m,mat,row+1,col)&&isIsland(n,m,mat,row,col+1)&&isIsland(n,m,mat,row-1,col)&&isIsland(n,m,mat,row,col-1);
        /*if(!isIsland(n,m,mat,row+1,col)) return false; 
        else if(!isIsland(n,m,mat,row-1,col)) return false; 
        else if(!isIsland(n,m,mat,row,col-1)) return false; 
        else if(!isIsland(n,m,mat,row,col+1)) return false; 
        else return  true;*/
        char t=mat[row][col];
        mat[row][col]='X';
        bool x=isIsland(n,m,mat,row+1,col)&&isIsland(n,m,mat,row,col+1)&&isIsland(n,m,mat,row-1,col)&&isIsland(n,m,mat,row,col-1);
        mat[row][col]=t;
        return x;
    }
    void replace(int n, int m, vector<vector<char>> &mat,int row,int col)
    {
        if(row>=n or row<0 or col<0 or col>=m){return ;}
        if(mat[row][col]=='X'){return ;}
        mat[row][col]='X';
        replace(n,m,mat,row+1,col);
        replace(n,m,mat,row,col-1);
        replace(n,m,mat,row-1,col);
        replace(n,m,mat,row,col+1);
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>> mat_copy;
        //mat_copy=mat;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //mat_copy=mat;
                if(isIsland(n,m,mat,i,j)) {replace(n,m,mat,i,j);}
            }
        }
        return mat;
    }
};