class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        long long max_length=0,max_breadth=0,r;
        int n=horizontalCuts.size(),m=verticalCuts.size(),i;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        max_length=max(horizontalCuts[0],h-horizontalCuts[n-1]);
        max_breadth=max(verticalCuts[0],w-verticalCuts[m-1]);        
        for(i=1;i<n;i++)
        {
            //max_length=max(max_length,horizontalCuts[i]-horizontalCuts[i-1]);
            if(max_length<(horizontalCuts[i]-horizontalCuts[i-1])){max_length=horizontalCuts[i]-horizontalCuts[i-1];}
        }
        for(i=1;i<m;i++)
        {
            //max_breadth=max(max_breadth,verticalCuts[i]-verticalCuts[i-1]);
            if(max_breadth<(verticalCuts[i]-verticalCuts[i-1])){max_breadth=verticalCuts[i]-verticalCuts[i-1];}
        }   
        r=(long long)max_length*max_breadth;
        return r%(1000000007);
    }
};