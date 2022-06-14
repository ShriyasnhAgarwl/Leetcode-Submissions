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
    ListNode *start;
    bool isPalindrome(ListNode* head) {
        start=head;
        return check(head);
    }
    bool check(ListNode *curr)
    {
        if(curr == NULL){ return true;}
        bool value=check(curr->next);
        bool value2 = (start->val == curr->val);
        start=start->next;
        return value&&value2;
    }
};