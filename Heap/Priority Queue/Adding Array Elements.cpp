class Solution{
  public:
    int minOperations(int arr[], int n, int k) 
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        int count=0;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        while(true)
        {
            int p1=pq.top();
            pq.pop();
            if(p1>=k){break;}
            p1+=pq.top();
            pq.pop();
            pq.push(p1);
            count++;
        }
        return count;
    }
};