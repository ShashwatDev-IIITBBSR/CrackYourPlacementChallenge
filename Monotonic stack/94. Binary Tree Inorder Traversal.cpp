class Solution {
public:
    void inorder(TreeNode *a,vector<int> &q)
    {
        if(!a){return;}
        inorder(a->left,q);
        q.push_back(a->val);
        inorder(a->right,q);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>q;
        inorder(root,q);
        return q;
    }
};