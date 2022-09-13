class Solution{
  public:
    //Function to merge K sorted linked list.
    Node *merge(Node *n1,Node *n2)
    {
        Node *n3=NULL,*temp;
        while(n1&&n2)
        {
            if(n1->data<n2->data)
            {
                if(n3==NULL){n3=temp=n1;}
                else{temp->next=n1;temp=n1;}
                n1=n1->next;
            }
            else
            {
                if(n3==NULL){n3=temp=n2;}
                else{temp->next=n2;temp=n2;}
                n2=n2->next;
            }
        }
        if(n1==NULL)
        {
            temp->next=n2;
        }
        else
        {
            temp->next=n1;
        }
        return n3;
    }
    Node * mergeKLists(Node *arr[], int K)
    {
        int i=1;
        Node *temp=arr[0];
        while(i<K)
         {
             temp=merge(temp,arr[i]);
             i++;
         }
         return temp;
    }
};
