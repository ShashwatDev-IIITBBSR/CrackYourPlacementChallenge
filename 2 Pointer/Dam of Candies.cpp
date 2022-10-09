public:
    int maxCandy(int height[], int n) 
    { 
        int l=0,r=n-1;
        int maxi=0;
        while(l<r)
        {
            maxi=max(maxi,min(height[l],height[r])*(r-l-1));
            if(height[l]<height[r]){l++;}
            else{r--;}
        }
        return maxi;
    }   