class Solution {
public:
    void subtree(TreeNode *root,TreeNode* p, TreeNode* q,TreeNode* &j)
    {
        if(!root){return;}
        if(j==NULL)
        {
            if(p->val>=q->val)
            {
                 if((root->val>=q->val)&(root->val<=p->val))
                 {
                       j=root;
                       return;
                 }
            }
            else
            {
                if((root->val>=p->val)&(root->val<=q->val))
                 {
                       j=root;
                       return;
                 }
            }
                
        }
        else{return;}
        subtree(root->left,p,q,j);
        subtree(root->right,p,q,j);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        TreeNode *j=NULL;
        subtree(root,p,q,j);
        return j;
    }
};
