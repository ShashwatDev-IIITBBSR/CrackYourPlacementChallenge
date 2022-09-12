class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int maxi=0;
        for(int i=0;i<N;i++)
        {
            for(int j=N-1;j>i;j--)
            {
                if(A[j]>=A[i])
                {
                    maxi=max(maxi,j-i);
                    break;
                }
            }
        }
        return maxi;
        // Your code here
    }
};
