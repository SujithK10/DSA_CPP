    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
        { return l2;}
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* dummy=new ListNode();
        ListNode* curr=dummy;
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        curr->next=(l1==NULL)?l2:l1;
        return dummy->next;
    }
