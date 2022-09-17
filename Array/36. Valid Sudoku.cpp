class Solution {
public:
    bool isvalid33(vector<vector<char>>& board,int a,int b)
    {
          unordered_set<char>uset1;
        int i=a,j=b;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
          j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
           j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        i=a+1;j=b;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        i=a+2;j=b;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        j++;
          if(board[i][j]>=49&&board[i][j]<=57)
          {
               if(uset1.find(board[i][j])!=uset1.end()){return 0;}
               else{uset1.insert(board[i][j]);}
          }
        return 1;
    }
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i=0;i<9;i++)
        {
            unordered_set<char>uset1,uset2;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]>=49&&board[i][j]<=57)
                {
                    if(uset1.find(board[i][j])!=uset1.end()){return 0;}
                    else{uset1.insert(board[i][j]);}
                }
                if(board[j][i]>=49&&board[j][i]<=57)
                {
                    if(uset2.find(board[j][i])!=uset2.end()){return 0;}
                    else{uset2.insert(board[j][i]);}
                }
            }
        }
        if(!isvalid33(board,0,0)||!isvalid33(board,3,0)||!isvalid33(board,6,0)||
           !isvalid33(board,0,3)||!isvalid33(board,3,3)||!isvalid33(board,6,3)||
           !isvalid33(board,0,6)||!isvalid33(board,3,6)||!isvalid33(board,6,6))
        {
            return 0;
        }
        return 1;
    }
};