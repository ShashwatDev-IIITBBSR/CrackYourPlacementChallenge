Node *removeDuplicates(Node *head)
{
    Node *ptr,*temp;
    ptr=head;
    while(ptr)
    {
        temp=ptr;
        while(temp!=NULL&&temp->data==ptr->data)
        {
            temp=temp->next;
        }
        ptr->next=temp;
        ptr=temp;
    }
    return head;
 // your code goes here
}
