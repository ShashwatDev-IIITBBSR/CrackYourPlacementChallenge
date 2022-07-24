int Target;
int min_val=INT_MAX;

class Solution {
public:

    pair<pair<int,int>,pair<int,int>> min_sum_sub_tree(Node *root)
    {
        pair<pair<int,int>,pair<int,int>> p,left,right;
        if(root==NULL)
        {
            p.first.first=INT_MAX;//int min
            p.first.second=INT_MIN;
            p.second.first=0;//sum of subtree
            p.second.second=0;//number of elements in subtree
            return p;
        }
        else
        {
            left=min_sum_sub_tree(root->left);
            right=min_sum_sub_tree(root->right);
            if(!(left.first.second<root->data)||!(right.first.first>root->data))//||left.second.second-right.second.second>1||left.second.second-right.second.second<-1)
            {
                p.first.first=INT_MIN;
                p.first.second=INT_MAX;
                p.second.first=0;
                p.second.second=0;
            }
            else
            {
                p.first.first=min(left.first.first,root->data);
                p.first.second=max(right.first.second,root->data);
                if(left.second.first+right.second.first+root->data==Target)
                {
                    min_val=min(min_val,left.second.second+1+right.second.second);
                }
                p.second.first=left.second.first+right.second.first+root->data;
                p.second.second=1+left.second.second+right.second.second;
            }
            return p; 
        }
    }
    int minSubtreeSumBST(int target, Node *root) 
    {
        Target=target;
        min_val=INT_MAX;
        min_sum_sub_tree(root);
        if(min_val==INT_MAX){return -1;}
        else{return min_val;}
    }
};
