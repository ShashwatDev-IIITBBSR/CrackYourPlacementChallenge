class Solution {
public:
    bool findelement(TreeNode *a,int element)
    {
        if(!a){return false;}
        if(a->val==element){return true;}
        return findelement(a->left,element)||findelement(a->right,element);
    }
    void ancestor(TreeNode* a, TreeNode* p, TreeNode* q,TreeNode* &w)
    {
        if(!a||w){return;}
        bool z,x,c,v;
        z=findelement(a->left,p->val);
        x=findelement(a->right,q->val);
        c=findelement(a->left,q->val);
        v=findelement(a->right,p->val);
        if((z&&x)||(c&&v))
        {
            w=a;
        }
        if(!w)
        {
            if((a->val==p->val)||(a->val==q->val))
            {
                w=a;
            }
        }
        ancestor(a->left,p,q,w);
        ancestor(a->right,p,q,w);
    }
   /* void ancestor(TreeNode* a, TreeNode* p, TreeNode* q,TreeNode* &w)
    {
        if(!a||w){return;}
        if(!w)
        {
            if(((a->val>=p->val)&&(a->val<=q->val))&&(p->val<q->val))
            {
                w=a;
            }
            else if(((a->val>=q->val)&&(a->val<=p->val))&&(p->val>q->val))
            {
                w=a;
            }
        }
        ancestor(a->left,p,q,w);
        ancestor(a->right,p,q,w);
    }*/
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *z=NULL;
        ancestor(root,p,q,z);
        return z;
    }
};