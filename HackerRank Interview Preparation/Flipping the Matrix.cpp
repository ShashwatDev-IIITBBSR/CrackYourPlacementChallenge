int flippingMatrix(vector<vector<int>> matrix) 
{
    int n=matrix.size();
    int d=n/2;
    int sum=0;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        {
            sum+=max(max(matrix[i][j],matrix[i][n-j-1]),max(matrix[n-i-1][j],matrix[n-i-1][n-j-1]));
        }
    }
    return sum;

}
