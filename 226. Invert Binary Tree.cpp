class Solution {
public:
    void swap(TreeNode* a)
    {
        TreeNode *q;
        if(a)
        {
             q=a->right;
             a->right=a->left;
             a->left=q;
             swap(a->left);
             swap(a->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) 
     {
        swap(root);
        return root;
    }
};