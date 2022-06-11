#include <stack>
class MyQueue {
public:
    stack<int> st1,st2;
    MyQueue() 
    {
    }
    
    void push(int x) 
    {
        st1.push(x);
    }
    
    int pop() 
    {
        int k,y;
        if(st1.empty())
        {
            return NULL;
        }
        while(!st1.empty())
        {
            k=st1.top();
            st1.pop();
            st2.push(k);
        }
        k=st2.top();
        st2.pop();
        while(!st2.empty())
        {
            y=st2.top();
            st2.pop();
            st1.push(y);
        }
        return k;
    }
    
    int peek() 
    {
         int k,y;
        if(st1.empty())
        {
            return NULL;
        }
        while(!st1.empty())
        {
            k=st1.top();
            st1.pop();
            st2.push(k);
        }
        y=st2.top();
        while(!st2.empty())
        {
            k=st2.top();
            st2.pop();
            st1.push(k);
        }
        return y;       
    }
    
    bool empty() 
    {
     if(st1.empty())
     {
         return true;      
     }
      return false;  
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */