class Solution {
public:
    /*bool static comparator(vector<int>a,vector<int>b)
    {
        if(a[0]<b[0]){return true;}
        else if(a[0]>b[0]){return false;}
        else if(a[1]<b[1]){return true;}
        else{return false;}
    }*/
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int left=0,right=1,del=0;
        while(right<n)
        {
            if(intervals[left][1]<=intervals[right][0])//no overlap
            {
                left=right;
                right++;
            }
            else if(intervals[left][1]>=intervals[right][1])//completely overlapping
            {
                del++;
                left=right;
                right++;
            }//Partial Overlap
            else //if((intervals[left][1]>intervals[right][0])&&(intervals[left][0]<=intervals[right][0]))
            {
                del++;
                right++;
            }
        }
        return del;
    }
};
