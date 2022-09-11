int countNodesinLoop(struct Node *head)
{
    Node *slow,*fast;
    slow=fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){break;}
    }
    if(fast==NULL||fast->next==NULL){return 0;}
    int size=1;
    fast=fast->next;
    while(fast!=slow)
    {
        fast=fast->next;
        size++;
    }
    return size;
}