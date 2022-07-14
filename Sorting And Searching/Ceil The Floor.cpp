pair<int, int> getFloorAndCeil(int arr[], int n, int x) 
{
    pair<int,int>p;
    int floor_element=0;
    int ceil_element=1000000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x && arr[i]<=ceil_element)
        {
            ceil_element=arr[i];
        }
        if(arr[i]<=x && arr[i]>=floor_element)
        {
            floor_element=arr[i];
        }
    }
    if(floor_element==0){p.first=-1;}
    else{p.first=floor_element;}
    if(ceil_element==1000000){p.second=-1;}
    else{p.second=ceil_element;}
    return p;
}