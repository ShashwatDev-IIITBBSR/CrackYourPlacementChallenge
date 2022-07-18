class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(!head || !head->next){return head;}
        ListNode *l,*m,*r;
        l=head;
        m=head->next;
        r=head->next->next;
        l->next=NULL;
        while(r!=NULL)
        {
            m->next=l;
            l=m;
            m=r;
            r=r->next;
        }
        m->next=l;
        return m;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0,num;
        ListNode *a1,*a2,*ans=NULL,*last;
        a1=reverseList(l1);
        a2=reverseList(l2);
        while(a1&&a2)
        {
            num=carry+a1->val+a2->val;
            carry=num/10;
            num=num%10;
            ListNode *temp=new ListNode;
            temp->val=num;
            temp->next=NULL;
            if(ans==NULL){ans=temp;last=temp;}
            else{last->next=temp;last=temp;}
            a1=a1->next;a2=a2->next;
        }
        //return ans;
        while(a1)
        {
            num=carry+a1->val;
            carry=num/10;
            num=num%10;
            ListNode *temp=new ListNode;
            temp->val=num;
            temp->next=NULL;
            if(ans==NULL){ans=temp;last=temp;}
            else{last->next=temp;last=temp;}            
            a1=a1->next;        
        }
        while(a2)
        {
            num=carry+a2->val;
            carry=num/10;
            num=num%10;
            ListNode *temp=new ListNode;
            temp->val=num;
            temp->next=NULL;
            if(ans==NULL){ans=temp;last=temp;}
            else{last->next=temp;last=temp;}            
            a2=a2->next;        
        }
        if(carry>0)
        {
            ListNode *temp=new ListNode;
            temp->val=carry;
            temp->next=NULL;
            last->next=temp;         
        }
        return reverseList(ans);
    }
};