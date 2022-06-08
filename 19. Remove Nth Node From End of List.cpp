class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(!head){return head;}
        if(head->next==NULL)
        {
            return NULL;
        }
        /*if(!head->next->next)//Optional Part but improves processing time
        {
            if(n==1)
            {
                head->next=NULL;
            }
            else
            {
                head=head->next;
            }
            return head;
        }*/
        ListNode *q,*p,*a,*temp;
        int b=0,c,i;
        a=head;
        while(a)
        {
            a=a->next;
            b++;
        }
        if(b==n)
        {
            head=head->next;
            return head;
        }
        c=b-n;
        a=head;
        for(i=0;i<(c-1);i++)
        {
            a=a->next;
        }
        temp=a->next->next;
        q=a->next;
        q->next=NULL;
        a->next=temp;
        return head;
    }
};