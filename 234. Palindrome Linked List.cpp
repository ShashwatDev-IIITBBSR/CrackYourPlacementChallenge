//My Solution By reversing the second half of Linked List
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode *a,*b,*t1,*t2,*t3,*t;
        int c=0;
        a=b=head;
        if(!head || !head->next){return true;}
        while(b&&b->next)
        {
            a=a->next;
            b=b->next->next;
            c++;
        }
        if(b==NULL)//Dealing with odd number of elements in Linked List
        {
            t=a;
        }
        else
        {
            t=a->next;
        }
        t1=t;
        t2=t->next;
        if(!t2)
        {
            if(c==1)//Size of Link List is either 2 or 3
            {
                if(head->val==t1->val)
                {
                    return true;
                }
            }
            else if(head->val==t2->val&&head->next->val==t1->val)//size of Link List is 4 or 5
            {
                return true;
            }
            return false;
        }
        t1->next=NULL;
        t3=t2->next;
        while(t3)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t=head;
        t2->next=t1;//t2 is now treated as head of second half of linked list
        while(t&&t2)
        {
            if(t->val!=t2->val)
            {
                return false;
            }
            t=t->next;
            t2=t2->next;
        }
        return true;        
    }
};
/*Others Solution
class Solution {
public:
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
    
    bool check(ListNode* p) {
        if (NULL == p) return true;
        bool isPal = check(p->next) & (temp->val == p->val);
        temp = temp->next;
        return isPal;
    }
};*/