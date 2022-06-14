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
    
    bool isPalindrome(ListNode* head) {
        
        return check(&head,head);
    }
    bool check(ListNode **start,ListNode *curr)
    {
        if(curr == NULL){ return true;}
        bool value=check(start,curr->next);
        bool value2 = ((*start)->val == curr->val);
        (*start) = (*start)->next;
        return value&&value2;
    }
};