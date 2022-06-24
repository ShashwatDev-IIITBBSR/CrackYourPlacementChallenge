class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> umap;
        int max_len=0,distance;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            A[i]=sum;
            if(sum==0)
            {
                max_len=max(max_len,i+1);
            }
            else if(!(umap.find(A[i])!=umap.end()))
            {
                umap[A[i]]=i;
            }
            else
            {
                max_len=max(max_len,i-umap[A[i]]);
            }
        }
        return max_len;
    }
};