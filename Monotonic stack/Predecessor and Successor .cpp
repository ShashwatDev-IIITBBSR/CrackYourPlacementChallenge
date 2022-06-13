
void inorder(Node* root,Node*& pre, Node*& suc, int key)
{
   if(root==NULL)
   return;

   inorder(root->left,pre,suc,key);
   if (root->key<key)
   {pre=root;}
   if(root->key>key)
   {if(suc==NULL)
       suc=root;return;}
   inorder(root->right,pre,suc,key);
   
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

     inorder( root,pre,suc,key);
   
}
/*void inorder(Node *a,Node*& temp,int k,int flag, Node*& pre, Node*& suc)
{
    if(!a){return;}
    inorder(a->left,temp,key,flag,pre,suc);
    if(flag==1){suc=a;flag=0;return;}//to store successor element
    if(a->key==k){pre=temp;flag=1;}   //element found,now we will have to look for successor
    temp=a;                          //to store predecessor element
    inorder(a->right,temp,k,flag,pre,suc);
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
   Node *temp=NULL;
   pre=suc=NULL;
   int flag=0;
   inorder(root,temp,key,flag,pre,suc);
}*/