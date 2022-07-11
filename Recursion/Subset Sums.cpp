class Solution
{
public:
    vector<int> vec;
    void recursion(vector<int> arr, int N,int index,int sum)
    {
        if(index==N){vec.push_back(sum);return;}
        recursion(arr,N,index+1,sum);
        recursion(arr,N,index+1,sum+arr[index]);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        recursion(arr,N,0,0);
        return vec;
    }
};
