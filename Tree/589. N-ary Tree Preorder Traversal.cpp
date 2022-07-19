/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) 
    {
        vector<int>result;
        if(!root){return result;}
        stack<Node*>st;
        Node *temp;
        vector<Node*>vec;
        st.push(root);
        while(!st.empty())
        {
            temp=st.top();
            result.push_back(temp->val);
            vec=temp->children;
            st.pop();
            for(int i=vec.size()-1;i>=0;i--)
            {
                st.push(vec[i]);
            }
        }
        return result;
    }
};

