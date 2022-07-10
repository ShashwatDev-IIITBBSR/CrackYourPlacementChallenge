class Solution
{
    public:
    vector<vector<int> > vec;
    void subsets(vector<int>& A,int index,vector<int>temp)
    {
        int n=A.size(),j;
        if(index==n){vec.push_back(temp);return;}
        subsets(A,index+1,temp);
        temp.push_back(A[index]);
        subsets(A,index+1,temp);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<int> t;
        subsets(A,0,t);
        sort(vec.begin(),vec.end());
        return vec;
    }
};