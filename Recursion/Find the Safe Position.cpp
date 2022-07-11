class Solution {
  public:
  
  int safePos(int n, int k) {
       if(n==1) return 1;
       
       return (safePos(n-1,k)+k-1)%(n) + 1;
   }
  //O(n^2 )approach
    /*int recursion(int k,int arr[],int count,int index) 
    {
        if(count==1){return arr[0];}
        index=(index+k)%count;
        for(int i=index;i<count-1;i++)
        {
            arr[i]=arr[i+1];
        }
        return recursion(k,arr,count-1,index-1);
    }
    int safePos(int n, int k) 
    {
        int arr[n];
        for(int i=0;i<n;i++){arr[i]=i+1;}        
        return recursion(k,arr,n,-1);
    }
    //O(n^2 )approach
    int safePos(int n, int k) 
    {
        int arr[n];
        for(int i=0;i<n;i++){arr[i]=i+1;}
        int count=n;
        int index=-1;
        while(count!=1)
        {
            index=(index+k)%count;
            for(int i=index;i<count-1;i++)
            {
                arr[i]=arr[i+1];
            }
            index=index-1;
            count--;
        }
        return arr[0];
    }*/