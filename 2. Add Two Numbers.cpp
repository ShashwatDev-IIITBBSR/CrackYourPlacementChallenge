//My Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *t1,*t2,*t,*head;
        long long num1=0,num2=0,p,q,k,n,sum,l;
        t1=l1;
        t2=l2;
        p=0;
        q=0;
        l=1;
        while(t1)
        {
            num1=num1+((t1->val)*l);
            l=l*10;
            t1=t1->next;
            p=p+1;
        }
        l=1;
        while(t2)
        {
            num1=num1+((t2->val)*l);
            l=l*10;
            t2=t2->next;
            q++;
        }
        if(p>q){head=t1=l1;}
        else{t1=head=l2;}
        sum=num1+num2;
        while(t1)
        {
            t1->val=sum%10;
            sum=sum/10;
            t2=t1;
            t1=t1->next;
        }
        if(sum)
        {
            t=new ListNode;
            t2->next=t;
            t->next=NULL;
            t->val=sum;
        }
        return head;
        }
};
//Other Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head=new ListNode();
        ListNode * temp=head;
        int sum=0,carry=0;
        while(l1!=NULL or l2!=NULL or carry){
            sum=0;
            
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode * nextNode=new ListNode(sum%10);
            temp->next=nextNode;
            temp=temp->next;
        }
        return head->next;
    }
};




