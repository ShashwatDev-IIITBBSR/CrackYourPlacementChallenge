Node* LCA(Node *root, int n1, int n2)
{
    if(n2<n1)
    {
        int k=n1;
        n1=n2;
        n2=k;
    }
   while(root&&(n1>root->data||n2<root->data)&&(n1!=root->data&&n2!=root->data))
   {
       if(n2<root->data)
       {
           root=root->left;
       }
       else
       {
           root=root->right;
       }
   }
   return root;
}
