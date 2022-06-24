class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) 
    {   
        int low=0;
        int result;
        int cut1,cut2;
        int high=n-1;
        if(n==1)
        {
            return ar1[0]+ar2[0];
        }
        if(ar1[0]>=ar2[n-1])
        {
            return ar1[0]+ar2[n-1];
        }
        if(ar2[0]>=ar1[n-1])
        {
            return ar1[n-1]+ar2[0];
        }
        while(low<high)
        {
            cut1=(low+high)/2;
            cut2=n-2-cut1;
            if((ar1[cut1]<=ar2[cut2+1])&&(ar1[cut1+1]>=ar2[cut2]))
            {
                result=max(ar1[cut1],ar2[cut2])+min(ar1[cut1+1],ar2[cut2+1]);
                break;
            }
            else if(ar1[cut1]>ar2[cut2+1])
            {
                high=cut1;
            }
            else
            {
                low=cut1;
            }
        }
        return result;
    }
};