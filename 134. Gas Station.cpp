class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int i,j,n=gas.size();
        int sum=0,st_sum=0;
        int index=0;
        for(i=0;i<n;i++)
        {
            sum+=gas[i]-cost[i];
            st_sum+=gas[i]-cost[i];
            if(st_sum<0){index=i+1;st_sum=0;}
        }
        if(sum<0){return -1;}
        return index;
    }
};
//My other accepted solution
/*class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int i,j,n=gas.size();
        int sum=0,st_sum=0;
        int index;
        vector<int> diff(n);
        for(i=0;i<n;i++)
        {
            diff[i]=gas[i]-cost[i];
            sum=sum+diff[i];
        }
        if(sum<0)
        {
            return -1;
        }
        index=0;
        for(i=0;i<n;i++)
        {
            st_sum+=diff[i];
            if(st_sum<0){index=i+1;st_sum=0;}
        }
        return index;
    }
};*/
//MY Brute Force Solution  -O(n^2)         
/*class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int i,j,n=gas.size();
        int sum=0,diff_sum=0;
        int temp_sum=0;
        for(i=0;i<n;i++)
        {
            if(gas[i]-cost[i]<0){diff_sum+=gas[i]-cost[i];continue;}
            temp_sum=0;
            for(j=i;j<n;j++)
            {
                temp_sum+=gas[j]-cost[j];
                if(temp_sum<0)
                {
                    break;
                }
            }
            if(temp_sum>=0 && temp_sum+diff_sum>=0){return i;}
            diff_sum+=gas[i]-cost[i];
        }
        return -1;
    }
};*/
/*
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int i,j,n=gas.size();
        int sum=0,diff_sum=0;
        int temp_sum=0;
        vector<int> diff(n);
        for(i=0;i<n;i++)
        {
            diff[i]=gas[i]-cost[i];
            sum=sum+diff[i];
        }
        if(sum<0)
        {
            return -1;
        }
        for(i=0;i<n;i++)
        {
            if(diff[i]<0){diff_sum+=diff[i];continue;}
            temp_sum=0;
            for(j=i;j<n;j++)
            {
                temp_sum+=diff[j];
                if(temp_sum<0)
                {
                    break;
                }
            }
            if(temp_sum>=0 && temp_sum+diff_sum>=0){return i;}
            diff_sum+=diff[i];
        }*/
        /*for(i=0;i<n;i++)
        {
            if(diff[i]<0){continue;}
            temp_sum=0;
            for(j=i;j<2*n;j++)
            {
                temp_sum+=diff[j%n];
                if(temp_sum<0)
                {
                    break;
                }
            }
            if(temp_sum>=0){return i;}
        }*/
        /*return -1;
    }
};
*/








