//My Solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head||!head->next)
        {
            return head;
        }
        ListNode *l,*j,*k;
        int flag,last=-101,w;
        l=head;
        j=l->next;
        k=j->next;
        flag=0;
        if(head->next->val==head->val)
        {
             flag=1;
        }
        while(k)
        {
            if(k->val==j->val)
            {
                 while(k&&k->val==j->val)
                 {
                       j=j->next;
                       k=k->next;
                  }
                  l->next=k;
                  j=k;
                  if(k==NULL)
                  {
                      break;
                   }
                   k=k->next;
            }
            else
            {
                l=j;
                j=k;
                k=k->next;
            }
        }
        if(flag==1)
        {
            if(!head->next){return NULL;}//All elements in list are same
            else if(head->next->val==head->val){head=head->next->next;}
            else{head=head->next;}
        }
        return head;
    }
};

//Others Solution Using Senital Head
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        // sentinel
        ListNode sentinel = new ListNode(0, head);

        // predecessor = the last node 
        // before the sublist of duplicates
        ListNode pred = sentinel;
        
        while (head != null) {
            // if it's a beginning of duplicates sublist 
            // skip all duplicates
            if (head.next != null && head.val == head.next.val) {
                // move till the end of duplicates sublist
                while (head.next != null && head.val == head.next.val) {
                    head = head.next;    
                }
                // skip all duplicates
                pred.next = head.next;     
            // otherwise, move predecessor
            } else {
                pred = pred.next;    
            }
                
            // move forward
            head = head.next;    
        }  
        return sentinel.next;
    }
}