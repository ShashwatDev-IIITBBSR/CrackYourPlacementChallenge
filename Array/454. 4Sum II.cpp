class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        int n1=nums1.size(),n2=nums2.size(),n3=nums3.size(),n4=nums4.size(),i,j,count=0;
        unordered_map<long long,int>umap;
        long long diff;
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n4;j++)
            {
                umap[nums3[i]+nums4[j]]++;
            }
        }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                diff=-nums1[i]-nums2[j];
                if(umap[diff]>0)
                {
                    count=count+umap[diff];
                }
            }
        }
        return count;
    }
};
