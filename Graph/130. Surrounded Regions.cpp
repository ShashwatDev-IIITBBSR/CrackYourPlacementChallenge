
class Solution {
public:
    bool iscapturepossible(vector<vector<char>>& board,int row,int col)
    {
        int r=board.size(),c=board[0].size();
        if(row==0||col==0||row==r-1||col==c-1){return false;}
        board[row][col]='X';
        if(board[row+1][col]=='O'&&!iscapturepossible(board,row+1,col)){return false;}
        if(board[row-1][col]=='O'&&!iscapturepossible(board,row-1,col)){return false;}
        if(board[row][col+1]=='O'&&!iscapturepossible(board,row,col+1)){return false;}
        if(board[row][col-1]=='O'&&!iscapturepossible(board,row,col-1)){return false;}
        return true;
    }
    /*void capture(vector<vector<char>>& board,int row,int col)//No need for this function
    {
        board[row][col]='X';
        if(board[row+1][col]=='O'){iscapturepossible(board,row+1,col);}
        if(board[row-1][col]=='O'){iscapturepossible(board,row-1,col);}
        if(board[row][col+1]=='O'){iscapturepossible(board,row,col+1);}
        if(board[row][col-1]=='O'){iscapturepossible(board,row,col-1);}
    }*/ 
    void solve(vector<vector<char>>& board) 
    {
        int r=board.size(),c=board[0].size();
        for(int i=1;i<r-1;i++)
        {
            for(int j=1;j<c-1;j++)
            {
                if(board[i][j]=='O')
                {
                    vector<vector<char>> vec=board;
                    if(iscapturepossible(vec,i,j))
                    {
                        board=vec;
                    }
                }
            }
        }
    }
};
//Optimized Solution using visited vector
class Solution {
public:
    bool iscapturepossible(vector<vector<char>>& board,int row,int col,vector<vector<bool>>&visited)
    {
        int r=board.size(),c=board[0].size();
        visited[row][col]=1;
        if(row==0||col==0||row==r-1||col==c-1){return false;}
        board[row][col]='X';
        if(board[row+1][col]=='O'&&!iscapturepossible(board,row+1,col,visited)){return false;}
        if(board[row-1][col]=='O'&&!iscapturepossible(board,row-1,col,visited)){return false;}
        if(board[row][col+1]=='O'&&!iscapturepossible(board,row,col+1,visited)){return false;}
        if(board[row][col-1]=='O'&&!iscapturepossible(board,row,col-1,visited)){return false;}
        return true;
    }
    void solve(vector<vector<char>>& board) 
    {
        int r=board.size(),c=board[0].size();
        vector<vector<bool>>visited(r,vector<bool>(c,0));
        for(int i=1;i<r-1;i++)
        {
            for(int j=1;j<c-1;j++)
            {
                if(board[i][j]=='O'&& visited[i][j]==0)
                {
                    vector<vector<char>> vec=board;
                    if(iscapturepossible(vec,i,j,visited))
                    {
                        board=vec;
                    }
                }
            }
        }
    }
};





