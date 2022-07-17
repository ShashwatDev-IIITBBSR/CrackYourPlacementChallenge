class Solution {
public:
    bool becomes_0(vector<vector<int>>& board,int r,int c)
    {
        int count=0,i,j,n_row=board.size(),n_col=board[0].size();
        if(r-1 >=0){if(board[r-1][c]==1||board[r-1][c]==3){count++;}}
        if(c-1 >=0){if(board[r][c-1]==1||board[r][c-1]==3){count++;}}
        if(r+1 <n_row){if(board[r+1][c]==1||board[r+1][c]==3){count++;}}
        if(c+1 <n_col){if(board[r][c+1]==1||board[r][c+1]==3){count++;}}
        if(r-1 >=0&& c-1>=0){if(board[r-1][c-1]==1||board[r-1][c-1]==3){count++;}}
        if(r-1 >=0&& c+1<n_col){if(board[r-1][c+1]==1||board[r-1][c+1]==3){count++;}}
        if(r+1 <n_row&& c-1>=0){if(board[r+1][c-1]==1||board[r+1][c-1]==3){count++;}}
        if(r+1 <n_row&& c+1<n_col){if(board[r+1][c+1]==1||board[r+1][c+1]==3){count++;}}
        if(count<2||count>3){return true;}
        return false;
    }
    bool becomes_1(vector<vector<int>>& board,int r,int c)
    {
        int count=0,i,j,n_row=board.size(),n_col=board[0].size();
        if(r-1 >=0){if(board[r-1][c]==1||board[r-1][c]==3){count++;}}
        if(c-1 >=0){if(board[r][c-1]==1||board[r][c-1]==3){count++;}}
        if(r+1 <n_row){if(board[r+1][c]==1||board[r+1][c]==3){count++;}}
        if(c+1 <n_col){if(board[r][c+1]==1||board[r][c+1]==3){count++;}}
        if(r-1 >=0&& c-1>=0){if(board[r-1][c-1]==1||board[r-1][c-1]==3){count++;}}
        if(r-1 >=0&& c+1<n_col){if(board[r-1][c+1]==1||board[r-1][c+1]==3){count++;}}
        if(r+1 <n_row&& c-1>=0){if(board[r+1][c-1]==1||board[r+1][c-1]==3){count++;}}
        if(r+1 <n_row&& c+1<n_col){if(board[r+1][c+1]==1||board[r+1][c+1]==3){count++;}}
        if(count==3){return true;}
        return false;
    }    
    void gameOfLife(vector<vector<int>>& board) 
    {
        int i,j,n_row=board.size(),n_col=board[0].size();
        for(i=0;i<n_row;i++)
        {
            for(j=0;j<n_col;j++)
            {
                if(board[i][j]==0 && becomes_1(board,i,j)){board[i][j]=2;}
                if(board[i][j]==1 && becomes_0(board,i,j)){board[i][j]=3;}
            }
        }
        for(i=0;i<n_row;i++)
        {
            for(j=0;j<n_col;j++)
            {
               if(board[i][j]==2){board[i][j]=1;}
               if(board[i][j]==3){board[i][j]=0;} 
            }
        }     
    }
};class Solution {
public:
    bool becomes_0(vector<vector<int>>& board,int r,int c)
    {
        int count=0,i,j,n_row=board.size(),n_col=board[0].size();
        if(r-1 >=0){if(board[r-1][c]==1||board[r-1][c]==3){count++;}}
        if(c-1 >=0){if(board[r][c-1]==1||board[r][c-1]==3){count++;}}
        if(r+1 <n_row){if(board[r+1][c]==1||board[r+1][c]==3){count++;}}
        if(c+1 <n_col){if(board[r][c+1]==1||board[r][c+1]==3){count++;}}
        if(r-1 >=0&& c-1>=0){if(board[r-1][c-1]==1||board[r-1][c-1]==3){count++;}}
        if(r-1 >=0&& c+1<n_col){if(board[r-1][c+1]==1||board[r-1][c+1]==3){count++;}}
        if(r+1 <n_row&& c-1>=0){if(board[r+1][c-1]==1||board[r+1][c-1]==3){count++;}}
        if(r+1 <n_row&& c+1<n_col){if(board[r+1][c+1]==1||board[r+1][c+1]==3){count++;}}
        if(count<2||count>3){return true;}
        return false;
    }
    bool becomes_1(vector<vector<int>>& board,int r,int c)
    {
        int count=0,i,j,n_row=board.size(),n_col=board[0].size();
        if(r-1 >=0){if(board[r-1][c]==1||board[r-1][c]==3){count++;}}
        if(c-1 >=0){if(board[r][c-1]==1||board[r][c-1]==3){count++;}}
        if(r+1 <n_row){if(board[r+1][c]==1||board[r+1][c]==3){count++;}}
        if(c+1 <n_col){if(board[r][c+1]==1||board[r][c+1]==3){count++;}}
        if(r-1 >=0&& c-1>=0){if(board[r-1][c-1]==1||board[r-1][c-1]==3){count++;}}
        if(r-1 >=0&& c+1<n_col){if(board[r-1][c+1]==1||board[r-1][c+1]==3){count++;}}
        if(r+1 <n_row&& c-1>=0){if(board[r+1][c-1]==1||board[r+1][c-1]==3){count++;}}
        if(r+1 <n_row&& c+1<n_col){if(board[r+1][c+1]==1||board[r+1][c+1]==3){count++;}}
        if(count==3){return true;}
        return false;
    }    
    void gameOfLife(vector<vector<int>>& board) 
    {
        //unordered_map<int,int>umap;
        int i,j,n_row=board.size(),n_col=board[0].size();
        for(i=0;i<n_row;i++)
        {
            for(j=0;j<n_col;j++)
            {
                if(board[i][j]==0 && becomes_1(board,i,j)){board[i][j]=2;}
                if(board[i][j]==1 && becomes_0(board,i,j)){board[i][j]=3;}
            }
        }
        for(i=0;i<n_row;i++)
        {
            for(j=0;j<n_col;j++)
            {
               if(board[i][j]==2){board[i][j]=1;}
               if(board[i][j]==3){board[i][j]=0;} 
            }
        }     
    }
};