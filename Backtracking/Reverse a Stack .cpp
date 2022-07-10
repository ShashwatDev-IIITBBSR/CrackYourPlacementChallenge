class Solution{
public:
    vector<int>vec;
    /*void recursion(stack<int> s)
    {
        if(s.empty()){return;}
        int temp=s.top();
        s.pop();
        recursion(s);
        vec.push_back(temp);//returning time
    }*/
    void recursion(stack<int> s)
    {
        if(s.empty()){return;}
        int temp=s.top();
        s.pop();
        vec.push_back(temp);//calling time
        recursion(s);
    }
    vector<int> Reverse(stack<int> St)
    {
        recursion(St);
        return vec;
        
    }
};