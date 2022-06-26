class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        vector<pair<int,int>>vec;
        int r=matrix.size();
        int c=matrix[0].size();
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(matrix[i][j]==1){vec.push_back({i,j});}
            }
        }
        unordered_set<int>row_set;
        unordered_set<int>col_set;
        for(auto a:vec)
        {
            int row=a.first;
            int col=a.second;
            if(!(row_set.find(row)!=row_set.end()))
            {
                for(i=0;i<c;i++)
                {
                    if(matrix[row][i]!=1){matrix[row][i]=1;}
                }
                row_set.insert(row);
            }
            if(!(col_set.find(col)!=col_set.end()))
            {
                for(i=0;i<r;i++)
                {
                    if(matrix[i][col]!=1){matrix[i][col]=1;}
                }
                col_set.insert(col);
            }
        }
    }
};/*
//others solution
void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row = matrix.size();
        int col = matrix[0].size();
        
        bool arr_row[row]; fill(arr_row, arr_row+row, false);
        bool arr_col[col]; fill(arr_col, arr_col+col, false);
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 1){
                    arr_row[i] = true;
                    arr_col[j] = true;
                }
            }
        }
        
        for(int i=0;i<row;i++){
            if(arr_row[i]){
                for(int j=0;j<col;j++){
                    matrix[i][j]= 1;
                }
            }
        }
        
        for(int i=0;i<col;i++){
            if(arr_col[i]){
                for(int j=0;j<row;j++){
                    matrix[j][i] = 1;
                }
            }
        }
        
    }
};*/