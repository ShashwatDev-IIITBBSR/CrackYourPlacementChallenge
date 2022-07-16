//Time Complexity-O(nlogn)and space complexity-O(n)
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        priority_queue<int,vector<int>,greater<int>>pq;
        int i=0,t;
        for(i=0;i<n;i++)
        {
            if(arr[i]>0){pq.push(arr[i]);}
        }
        i=1;
        while(!pq.empty())
        {
            t=pq.top();
            pq.pop();
            if(t==i){i++;}
            else if(t>i){return i;}
        }
        return i;
    } 
};
//Time Complexity-O(n)and space complexity-O(1)
/*int missingNumber(int arr[], int n) 
    { 
        int temp=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
                i--;
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
        }
        
        return n+1;
    }*/