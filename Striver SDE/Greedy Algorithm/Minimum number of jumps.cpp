class Solution{
  public:
    int jumps(int arr[],int target_index)
    {
        if(target_index==0){return 0;}
        for(int i=0;i<target_index;i++)
        {
            if(i+arr[i]>=target_index)
            {
                return jumps(arr,i)+1;
            }
        }
        return INT_MIN;
    }
    int minJumps(int arr[], int n)
    {
        int res;
        res=jumps(arr,n-1);
        if(res>=0){return res;}
        else{return -1;}
    }
};
