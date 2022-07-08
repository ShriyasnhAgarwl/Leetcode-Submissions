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
    int count=0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL)
        {
            head=NULL;
        }
        
        else
        {
            ListNode* p=head;
         while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        if(count==n)
        {
            return head->next;
        }
        int x=count-n;
        p=head;
        ListNode* q=head;
        while(x--)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;}
        
        
        
        
        return head;
    }
};