class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        Node *t;
        t=del;
        if(!t->next->next)
        {
            del->data=t->next->data;
        }
        else
        {
            while(t->next->next)
            {
               t->data=t->next->data;
               t=t->next;
            }
            t->data=t->next->data;
        }    
        t->next=NULL;
        /*Solution For Deletion with Head Pointer 
        Node *t;
        t=head;
        if(t==del)
        {
            t=head->next;
            del->next=NULL;
            head=t;
        }
        while(t)
        {
            if(t->next==del)
            {
                break;
            }
        }
        if(t->next==del)
        {
            t->next=del->next;
            del->next=NULL;
        }*/
    }

};