class Solution{
public:
    void moris_traversal(Node *root, int l, int h,int &count)
    {
        int k;
        if(!root){return;}
        while(root)
        {
            if(!root->left)
            {
                k=root->data;
                if((k<=h)&&(k>=l)){count++;}
                root=root->right;
            }
            else
            {
                Node* temp;
                temp=root->left;
                while(temp->right&&temp->right!=root)
                {
                    temp=temp->right;
                }
                if(!temp->right)
                {
                    temp->right=root;
                    root=root->left;
                }
                else
                {
                    temp->right=NULL;
                    k=root->data;
                    if((k<=h)&&(k>=l)){count++;}
                    root=root->right;
                }
            }
        }
    }
    int getCount(Node *root, int l, int h)
    {
        int count=0;
        moris_traversal(root,l,h,count);
        return count;
      // your code goes here   
    }
};