class Solution {
public:
    vector<vector<int>>vec;
    void recursion(queue<TreeNode*> st)
    {
        if(st.empty()){return;}
        queue<TreeNode*>temp_queue;
        TreeNode *root;
        vector<int>v;
        while(!st.empty())
        {
            root=st.front();
            st.pop();
            v.push_back(root->val);
            if(root->left){temp_queue.push(root->left);}
            if(root->right){temp_queue.push(root->right);}
        }
        vec.push_back(v);   
        recursion(temp_queue);
    }
vector<vector<int>> levelOrder(TreeNode* root)
{
    if(!root){return vec;}
    queue<TreeNode*>st;
    st.push(root);
    recursion(st);
    return vec;
}

};