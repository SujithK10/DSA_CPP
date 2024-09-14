bool hasCycle(ListNode *head) {

       if(head==NULL)
       {
           return false;
       } 
       ListNode *slow,*fast;
       slow=fast=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(fast==slow)
           {
               return true;
           }
       }
       return false;
    }
