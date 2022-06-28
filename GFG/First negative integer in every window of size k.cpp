vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
{
    queue<int>q;
    vector<long long> vec;
    for(int i=0;i<N;i++)
    {
        if(i<K-1)//Always K-1
        {
            if(A[i]<0)
            {
                q.push(i);
            }
        }
        else
        {
            if(A[i]<0){q.push(i);}
            if(q.empty()){vec.push_back(0);}
            else
            {
                if(q.front()==i-K){q.pop();}
                if(q.empty()){vec.push_back(0);}
                else{vec.push_back(A[q.front()]);}
            }
        }
    }
    return vec;                                             
}