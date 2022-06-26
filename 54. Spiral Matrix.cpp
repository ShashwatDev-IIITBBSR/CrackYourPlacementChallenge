class Solution {
public:
    vector<int>vec;
    void spiral(vector<vector<int> > matrix,int col_start,int col_end,int row_start,int row_end)
    {
        //if(col_start==col_end){vec.push_back(matrix[col_start][row_start]);return;}
        int i,j;
        //int k=row_start;
        for(i=col_start;i<=col_end;i++)
        {
            vec.push_back(matrix[row_start][i]);
        }
        if(row_start==row_end){return;}
        for(i=row_start+1;i<=row_end;i++)
        {
            vec.push_back(matrix[i][col_end]);
        }
         if(col_start==col_end){return;}       
        for(i=col_end-1;i>=col_start;i--)
        {
            vec.push_back(matrix[row_end][i]);
        }
        for(i=row_end-1;i>row_start;i--)
        {
            vec.push_back(matrix[i][col_start]);
        }
    }
     vector<int> spiralOrder(vector<vector<int>>& matrix) 
     {      
        int row_start=0,col_start=0,col_end=matrix[0].size()-1,row_end=matrix.size()-1;
        while(row_start<=row_end&&col_start<=col_end)
        {
            spiral(matrix,col_start,col_end,row_start,row_end);
            row_start++;col_start++;
            row_end--;col_end--;
        }
        return vec;
    }
};