   //Soltion 1-Using Unordered Set
    int *findTwoElement(int *arr, int n) 
    {
        unordered_set<int>uset;
        int *res,i;
        res=new int[2];
        for(i=0;i<n;i++)
        {
            if(uset.find(arr[i])!=uset.end())
            {
                res[0]=arr[i];
            }
            else
            {uset.insert(arr[i]);}
        }
        for(int i=1;i<=n;i++)
        {
            if(!(uset.find(i)!=uset.end()))//element not present
            {
                res[1]=i;
                return res;
            }
        }
    }
    
    //Soltion 2-Using Ordered Set
    /*int *findTwoElement(int *arr, int n) 
    {
        set<int>uset;
        int *res,i;
        res=new int[2];
        for(i=0;i<n;i++)
        {
            if(uset.find(arr[i])!=uset.end())
            {
                res[0]=arr[i];
            }
            else
            {uset.insert(arr[i]);}
        }
        i=1;
        for(auto x:uset)
        {
            if(x!=i)
            {
                res[1]=i;
                return res;
            }
            i++;
        }
        res[1]=i;
        return res;
    }*/
/*
class Solution{
public:
    int *findTwoElement(int *arr, int n) 
    {
        int i=0,temp;
        while(i!=n)
        {
            temp=arr[i];
            if(arr[i]==i+1){i++;}
            else if(arr[i]==arr[arr[i]-1]){i++;}
            else
            {
                arr[i]=arr[arr[i]-1];
                arr[arr[i]-1]=temp;
                if(arr[i]==i+1){i++;}
            }
        }
        int *res=new int[2];
        for(i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                res[0]=arr[i];
                res[1]=i+1;
                return res;
            }
        }
    
    }
    
    
    
    //Time-O(n),Space-O(1)
    /*int *findTwoElement(int *arr, int n) 
    {
        int i;
        long long total_sum=(long long)(n*(n+1))/2;//Sum of numbers till n
        long long curr_sum=0;
        long long square_sum=(long long)(n*(n+1)*(2*n+1))/6;//Sum of squares till n
        long long curr_square_sum=0;
        for(i=0;i<n;i++)
        {
            curr_sum+=arr[i];
            curr_square_sum+=arr[i]*arr[i];
        }
        long long repeat_sub_missing=curr_sum-total_sum;
        long long repeat_add_missing=(curr_square_sum-square_sum)/repeat_sub_missing;//A^2-B^2 formula
        int *res=new int[2];
        res[0]=(repeat_sub_missing+repeat_add_missing)/2;
        res[1]=repeat_add_missing-res[0];
        return res;
    }*/
