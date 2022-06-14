/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == NULL) return head;
            cursor = cursor->next;
        }
        ListNode *curr =head;
        ListNode *prev = NULL;
        int c=0;
        while(c<k && curr!=NULL)
        {
            c++;
            ListNode *tempNode= curr->next;
            curr->next = prev;
            prev =curr;
            curr= tempNode;
        }
        head->next= reverseKGroup(curr, k);
        return prev;
    }
};