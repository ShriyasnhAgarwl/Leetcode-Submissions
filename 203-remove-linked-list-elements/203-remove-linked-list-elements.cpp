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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* x=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        while(temp!=NULL)
        {
            
            if(temp->val==val)
            {
                x->next=temp->next;
                temp=temp->next;
            }
            else
            {
            x=temp;
            temp=temp->next;
            }
        }
        return head;
    }
};