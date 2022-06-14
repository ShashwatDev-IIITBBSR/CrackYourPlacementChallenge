class Solution {
public:
    int height(TreeNode* q,int &flag)
    {
        int lh,rh,diff;
        if(!q){return 0;}
        lh=height(q->left,flag);
        rh=height(q->right,flag);
        diff=lh-rh;
        if(diff>1||diff<-1){flag=1;}
        if(lh>rh){return lh+1;}
        else{return rh+1;}
    }
    bool isBalanced(TreeNode* root) {
        int flag=0;
        height(root,flag);
        if(flag==1){return false;}
        return true;
    }
};