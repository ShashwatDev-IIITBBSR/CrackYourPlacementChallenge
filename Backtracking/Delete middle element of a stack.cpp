class Solution
{
    public:
    //Function to delete middle element of a stack.
    void recursion(stack<int>&s,int curr_index,int index_del)
    {
        if(curr_index==index_del)
        {
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        recursion(s,curr_index+1,index_del);
        s.push(temp);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       int d=sizeOfStack/2;
       //Index count from right end
       recursion(s,0,d);
    }
};