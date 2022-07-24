class Solution{
    public:
    //Function to check whether a binary tree is balanced or not
    bool t;
    int height_balanced(Node *root)
    {
        if(!root){return 0;}
        int lh=height_balanced(root->left),rh=height_balanced(root->right);
        if(lh-rh>1||lh-rh<-1)
        {
            t=false;
        }
        return 1+max(lh,rh);
    }
    bool isBalanced(Node *root)
    {
        t=true;
        height_balanced(root);
        return t;
    }
};
