bool findPair(int arr[], int size, int n)
{
    unordered_set<int>uset;
    int target;
    for(int i=0;i<size;i++)
    {
        target=n+arr[i];
        if(uset.find(target)!=uset.end()){return true;}
        target=arr[i]-n;
        if(uset.find(target)!=uset.end()){return true;}
        uset.insert(arr[i]);
    }
    return false;
    //code
    
}