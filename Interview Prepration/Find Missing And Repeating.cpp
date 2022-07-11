   //Soltion 1-Using Unordered Set
    int *findTwoElement(int *arr, int n) 
    {
        unordered_set<int>uset;
        int *res,i;
        res=new int[2];
        for(i=0;i<n;i++)
        {
            if(uset.find(arr[i])!=uset.end())
            {
                res[0]=arr[i];
            }
            else
            {uset.insert(arr[i]);}
        }
        for(int i=1;i<=n;i++)
        {
            if(!(uset.find(i)!=uset.end()))//element not present
            {
                res[1]=i;
                return res;
            }
        }
    }
    
    //Soltion 2-Using Ordered Set
    /*int *findTwoElement(int *arr, int n) 
    {
        set<int>uset;
        int *res,i;
        res=new int[2];
        for(i=0;i<n;i++)
        {
            if(uset.find(arr[i])!=uset.end())
            {
                res[0]=arr[i];
            }
            else
            {uset.insert(arr[i]);}
        }
        i=1;
        for(auto x:uset)
        {
            if(x!=i)
            {
                res[1]=i;
                return res;
            }
            i++;
        }
        res[1]=i;
        return res;
    }*/
};