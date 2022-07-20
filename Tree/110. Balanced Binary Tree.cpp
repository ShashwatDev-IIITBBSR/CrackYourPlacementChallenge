//Method 1
class Solution {
public:
    pair<int,bool> heightbalanced(TreeNode* root)
    {
        //int part of pair will save height and bool part will save if it's height balanced or not
        if(root==0)
        {
            pair<int,bool>p;
            p.first=0;
            p.second=true;
            return p;
        }
        pair<int,bool> r,l=heightbalanced(root->left);
        if(!l.second){return l;}
        r=heightbalanced(root->right);
        if(!r.second){return r;}
        else
        {
            if(r.first-l.first>1 ||r.first-l.first<-1)
            {
                r.second=0;
                return r;
            }
            else
            {
                r.first=1+max(r.first,l.first);
                return r;
            }
        }
    }    
    bool isBalanced(TreeNode* root) 
    {
        pair<int,bool>p;
        p=heightbalanced(root);
        if(p.second==true){return true;}
        return false;
    }   
            
};  
//Method 2
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