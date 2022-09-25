class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high){return ;}
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        // code here
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int less=0;
        int pivot_element=arr[low];
        for(int i=low;i<=high;i++)
        {
            int x=arr[i];
            if(x<pivot_element){less++;}
        }
        swap(arr[low],arr[low+less]);
        int n=low+less;
        int l=low,h=high;
        while(l<n&&h>n)
        {
            while(arr[l]<pivot_element){l++;}
            while(arr[h]>pivot_element){h--;}
            if(l<n&&h>n){swap(arr[l],arr[h]);}
        }
        return n;
       // Your code here
    }
};














