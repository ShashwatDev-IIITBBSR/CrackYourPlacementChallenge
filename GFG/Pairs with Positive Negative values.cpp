class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) 
    {
        unordered_map<int,int>umap;
        int k,n1,n2,d;
        priority_queue<int, vector<int>,greater<int>>pq;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            umap[a[i]]++;
            if(a[i]>0)
            {
                pq.push(a[i]);
            }
        }
        while(!pq.empty())
        {
            k=pq.top();
            pq.pop();
            n1=umap[k];
            n2=umap[-k];
            if(n1>n2){d=n2;}
            else{d=n1;}
            if(n1>0&&n2>0)
            {
                for(int j=0;j<d;j++)
                {
                    vec.push_back(-k);
                    vec.push_back(k);
                }
                umap[k]=0;
                umap[-k]=0;
            }
        }
        return vec;
    }
};
