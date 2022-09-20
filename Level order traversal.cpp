
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int>vec;
    void level(queue<Node*>q)
    {
        queue<Node*>child;
        Node *temp;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            vec.push_back(temp->data);
            if(temp->left){child.push(temp->left);}
            if(temp->right){child.push(temp->right);}
        }
        if(!child.empty()){level(child);}
    }
    vector<int> levelOrder(Node* node)
    {
        queue<Node*>q;
        q.push(node);
        level(q);
        return vec;
      
      
    }
};
