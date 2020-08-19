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
        ListNode *temp=head;
        ListNode *prev=head;
        if(head==NULL)
            return nullptr;
        else if(head->val == val){
            head=head->next;
        }
        else
        {
            while(temp!=NULL)
        {
            if(temp->val==val)
            {
                prev->next=temp->next;
            }
            else
               prev=temp;
                temp=temp->next;
            
        }
        }
        return head;
    }
};