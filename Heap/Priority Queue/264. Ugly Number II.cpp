
/* class Solution {
public:
    int nthUglyNumber(int n) 
    {
        long long i=1,t,t1,t2,t3;
        set<long long>uset;
        uset.insert(1);
        while(i<=n)
        {
            t=t1=t2=t3=*uset.begin();
            uset.erase(t);
            t1=t1*2;
            t2=t2*3;
            t3=t3*5;
            uset.insert(t2);
            uset.insert(t3);
            uset.insert(t1);
            i++;
        }
        return t;
    }
};*/


 class Solution {
public:
    int nthUglyNumber(int n) 
    {
        long long i=1,t,t1,t2,t3;
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        unordered_set<long long>uset;
        uset.insert(1);
        pq.push(1);
        while(i<=n)
        {
            t=t1=t2=t3=pq.top();
            pq.pop();
            t1=t1*2;
            t2=t2*3;
            t3=t3*5;
            if(!(uset.find(t1)!=uset.end())){pq.push(t1);uset.insert(t1);}
            if(!(uset.find(t2)!=uset.end())){pq.push(t2);uset.insert(t2);}
            if(!(uset.find(t3)!=uset.end())){pq.push(t3);uset.insert(t3);}
            i++;
        }
        return t;
    }
};

/*
class Solution {
public:
    bool is_true(int i)
    {
        while(i%2==0)
        {
            i=i/2;
        }
        while(i%3==0)
        {
            i=i/3;
        }
        while(i%5==0)
        {
            i=i/5;
        }
        if(i==1)
        {
            return true;
        }
        return false;
    }
    int nthUglyNumber(int n) 
    {
        int i=0,c=0;
        while(i<n)
        {
            c++;
            while(!is_true(c))
            {
                c++;
            }
            i++;
        }
        return c;
    }
};*/

