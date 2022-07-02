class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == NULL)
            return NULL;
        
        if(head->next == NULL)
            return head;
        
        ListNode* cur = head->next;
        ListNode* prev = head;
        
        while(cur != NULL)
        {
            if(prev->val == cur->val)
            {
                prev->next = cur->next;
                cur = cur->next;
                continue;
            }
            prev = cur;
            cur = cur->next;
        }
        return head;
    }
};