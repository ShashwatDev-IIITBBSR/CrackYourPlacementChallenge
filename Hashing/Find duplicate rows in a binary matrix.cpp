class Solution
{   
public:
vector<int> repeatedRows(vector<vector<int>> matrix, int M, int N) 
{ 
    vector<int>dublicate;
    set<vector<int>>uset;
    for(int i=0;i<M;i++)
    {
        if(uset.find(matrix[i])!=uset.end())
        {
            dublicate.push_back(i);
        }
        else
        {
            uset.insert(matrix[i]);
        }
    }
    return dublicate;
} 
};
