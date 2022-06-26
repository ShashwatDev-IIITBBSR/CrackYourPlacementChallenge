class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i,j;
        if(x<matrix[0][0])
        for(i=0;i<n;i++)
        {
            if(matrix[i][0]==x){return true;}
            else if(matrix[i][0]>x){break;}
        }
        for(j=0;j<m;j++)
        {
            if(matrix[0][j]==x){return true;}
            else if(matrix[0][j]>x){break;}
        }
        for(int a=1;a<i;a++)
        {
            for(int b=1;b<j;b++)
            {
                if(matrix[a][b]==x){return true;}
            }
        }
        return false;
    }
};