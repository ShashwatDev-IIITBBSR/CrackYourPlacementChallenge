class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long>& arr, int start, int end)
    {
        int temp;
        while(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;end--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        int i=0,end;
        while(i<n)
        {
            end=i+k-1;
            if(end>n-1)
            {
                reverse(arr,i,n-1);
                break;
            }
            else
            {
                reverse(arr,i,end);
                i=end+1;
            }
        }
        // code here
    }
};