class Solution
{
    public:
    void sort012(int a[], int n)
    {
        map<int,int>omap;
        for(int i=0;i<n;i++)
        {
            omap[a[i]]++;
        }
        int i=0,val;
        for(auto x:omap)
        {
            n=x.second;
            val=x.first;
            int j=0;
            while(j<n)
            {
                a[i]=val;
                i++;
                j++;
            }
        }
    }
    
};