//My Solution
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        int num=0,count=0;
        ListNode *t;
        t=head;
        while(t)
        {   
            count++;
            t=t->next;
        }
        t=head;
        count--;
        while(t)
        {
            num=num+((t->val)*(pow(2,count)));
            count--;
            t=t->next;
        }
        return num;
    }
};
//others Solution
class Solution {
    public int getDecimalValue(ListNode head) {
        while (head.next != null) {
            head = head.next;
            // TODO    
        }
    }
}
//Bit Manipulation
class Solution {
    public int getDecimalValue(ListNode head) {
        int num = head.val;
        while (head.next != null) {
            num = (num << 1) | head.next.val;
            head = head.next;    
        }
        return num;
    }
}
