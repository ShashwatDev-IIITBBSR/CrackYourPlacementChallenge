class Solution 
{
    public:
    bool static comparator(struct Job j1,struct Job j2)
    {
        if(j1.profit>j2.profit){return true;}
        else{return false;}
        
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>vec(101,-1);
        vec[0]=2;
        vector<int>final_vec(2);
        int i,num_jobs,max_profit,dead_line;
        sort(arr,arr + n,comparator);
        num_jobs=0;
        max_profit=0;
        for(i=0;i<n;i++)
        {
            dead_line=arr[i].dead;
            while(dead_line>0&&vec[dead_line]!=-1)
            {
                dead_line--;
            }
            if(vec[dead_line]==-1)
            {   num_jobs++;
                max_profit+=arr[i].profit;}
                vec[dead_line]=1;
            }
        final_vec[0]=num_jobs;
        final_vec[1]=max_profit;
        return final_vec;
    } 
};