class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void swap(int arr[],int i,int j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    void recursion(int arr[],int l)
    {
        if(l==1){return;}
        for(int i=0;i<l-1;i++)
        {
            if(arr[i]>arr[i+1]){swap(arr,i,i+1);}
        }
        recursion(arr,l-1);
    }
    void bubbleSort(int arr[], int n)
    {
        recursion(arr,n);
    }
};