class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>prev_inc(n,-1),next_desc(n,-1);
        int prev=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=prev)
            {
                prev=arr[i];
                continue;
            }
            else
            {
                if(prev_inc[i-1]==-1)
                {
                    prev_inc[i]=1;
                }
                else
                {
                    prev_inc[i]=1+prev_inc[i-1];
                }
                prev=arr[i];
            }
        }
        prev=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<=prev)
            {
                prev=arr[i];
                continue;
            }
            else
            {
                if(next_desc[i+1]==-1)
                {
                    next_desc[i]=1;
                }
                else
                {
                    next_desc[i]=1+next_desc[i+1];
                }
                prev=arr[i];
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(next_desc[i]!=-1&&prev_inc[i]!=-1)
            {
                maxi=max(maxi,next_desc[i]+prev_inc[i]+1);
            }
        }
        return maxi;
    }
};