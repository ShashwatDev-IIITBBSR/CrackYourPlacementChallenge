int getNthFromLast(Node *head, int n)
{
    Node *f,*s;
    f=s=head;
    int i=0;
    while(i<n&&f!=NULL)
    {
        f=f->next;
        i++;
    }
    if(i!=n&&f==NULL){return -1;}
    while(f!=NULL)
    {
        f=f->next;
        s=s->next;
    }
    return s->data;
       // Your code here
}
