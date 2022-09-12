class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node *temp,*t;
        temp=head;
        int i;
        while(temp)
        {
            i=0;
            while(i<M-1&&temp!=NULL)
            {
                temp=temp->next;
                i++;
            }
            //temp->next=NULL;
            //return;
            if(temp==NULL){break;}
            t=temp;
            i=0;
            while(i<=N&&temp!=NULL)
            {
                temp=temp->next;
                i++;
            }
            t->next=temp;
        }
    }
};



