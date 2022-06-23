class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int element;
        int i=0,j=0,overall_count=0,ith=0;
        while(overall_count<k)
        {
            if((i<n)&&(j<m))
            {
                if(arr1[i]<arr2[j])
                {
                    element=arr1[i];
                    i++;
                }
                else
                {
                    element=arr2[j];
                    j++;
                }
            }
            else if(i<n)
            {
                element=arr1[i];
                i++;                
            }
            else
            {
                element=arr2[j];
                j++;
            }
            overall_count++;
        }
        return element;
    }
};