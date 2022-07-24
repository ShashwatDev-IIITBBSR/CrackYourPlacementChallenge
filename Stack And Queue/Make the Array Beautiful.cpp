class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) 
    {
        vector<int>vec;
        int n=arr.size();
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            if(dq.empty())
            {
                dq.push_back(arr[i]);
            }
            else
            {
                if(dq.back()*arr[i]<0)
                {
                    dq.pop_back();
                }
                else if(dq.back()*arr[i]>0)
                {
                    dq.push_back(arr[i]);
                }
                else
                {
                    if(arr[i]<0||dq.back()<0)
                    {
                        dq.pop_back();
                    }
                    else{
                        dq.push_back(arr[i]);
                    }
                }
            }
        }
        while(!dq.empty())
        {
            vec.push_back(dq.front());
            dq.pop_front();
        }
        return vec;
    }
};