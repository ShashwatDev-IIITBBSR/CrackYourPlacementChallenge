Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *head3,*ptr,*t1=head1,*t2=head2;
    if(t1->data<t2->data)
    {
        head3=ptr=t1;
        t1=t1->next;
    }
    else
    {
        head3=ptr=t2;
        t2=t2->next;
    }
    while(t1&&t2)
    {
        if(t1->data<t2->data)
        {
            ptr->next=t1;
            ptr=t1;
            t1=t1->next;
        }
        else
        {
            ptr->next=t2;
            ptr=t2;
            t2=t2->next;
        }
    }
    if(!t1)
    {
        ptr->next=t2;
    }
    else
    {
        ptr->next=t1;
    }
    return head3;
}  
