class Solution {
public:
    void preorder_traversal(TreeNode* p, TreeNode* q,bool &a)
    {
        if((p&&!q)||(!p&&q)){a=false;return;}
        if((!p&&!q)||(!a)){return;}
        if(p->val!=q->val)
        {
            a=false;
            return;
        }
        preorder_traversal(p->left,q->left,a);
        preorder_traversal(p->right,q->right,a);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool r=true;
        preorder_traversal(p,q,r);
        return r;
    }
};
//others solution
/*class Solution {
  public boolean isSameTree(TreeNode p, TreeNode q) {
    // p and q are both null
    if (p == null && q == null) return true;
    // one of p and q is null
    if (q == null || p == null) return false;
    if (p.val != q.val) return false;
    return isSameTree(p.right, q.right) &&
            isSameTree(p.left, q.left);
  }
}*/