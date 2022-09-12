int intersectPoint(Node* head1, Node* head2)
{
    Node *t1,*t2;
    t1=head1;
    t2=head2;
    int n1=0,n2=0;
    while(t1!=NULL)
    {
        n1++;
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        n2++;
        t2=t2->next;
    }
    t1=head1;
    t2=head2;
    if(n1>n2)
    {
        int i=0;
        while(i<n1-n2)
        {
            i++;
            t1=t1->next;
        }
    }
    else
    {
        int i=0;
        while(i<n2-n1)
        {
            i++;
            t2=t2->next;
        }
    }
    while(t1&&t2)
    {
        if(t1==t2)
        {
            return t1->data;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return -1;
}

