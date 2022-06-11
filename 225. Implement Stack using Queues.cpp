class MyStack {
    queue <int> q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) 
    {
        q1.push(x);
    }
    
    int pop() 
    {
        int j,k;
        if(q1.empty())
        {
            return NULL;
        }
        while(q1.size()!=1)
        {
            k=q1.front();
            q1.pop();
            q2.push(k);
        }
        j=q1.front();
        q1.pop();
        while(q2.size()!=0)
        {
            k=q2.front();
            q2.pop();
            q1.push(k);
        }
        return j;
    }
    
    int top() 
    {
        int j,k;        
        while(q1.size()!=0)
        {
            j=q1.front();
            q1.pop();
            q2.push(j);
        }
        while(q2.size()!=0)
        {
            k=q2.front();
            q2.pop();
            q1.push(k);
        }
        return j;           
    }
    
    bool empty() 
    {
        if(!q1.size())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */