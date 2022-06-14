class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>a;
        int i=0,u,k,v,n1,n2,c=0;
        n1=nums1.size();
        n2=nums2.size();
        while(i<n1)
        {
            v=nums1[i];
            k=0;
            while(v!=nums2[k])
            {
                k=k+1;
            }
            k=k+1;
            while(k<n2)
            {
                if(v<nums2[k])
                {
                    break;
                }
                k++;
            }
            if(k!=n2){a.push_back(nums2[k]);}
            else{a.push_back(-1);}
            i++;
        }
            return a;
    }
};