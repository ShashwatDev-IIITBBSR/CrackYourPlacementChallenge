class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int i=1,prev=arr[0];
        int n=arr.size();
        while(i<n&&prev<arr[i])
        {
            prev=arr[i];
            i++;
        }
        if(i==n||i==1){return 0;}
        while(i<n&&prev>arr[i])
        {
            prev=arr[i];
            i++;
        }
        if(i==n){return 1;}
        else{return 0;}
    }
};