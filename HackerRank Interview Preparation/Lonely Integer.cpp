int lonelyinteger(vector<int> a) 
{
    /*vector<int>arr(101,0);
    for(auto x:a)
    {
        arr[x]++;
    }
    for(int i=0;i<101;i++)
    {
        if(arr[i]==1)
        {
            return i;
        }
    }
    return -1;*/
    int xo=0;
    for(auto x:a)
    {
        xo=xo^x;
    }
    return xo;
}
