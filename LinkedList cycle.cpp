/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //****************************************Leet Code Problem 141*****************************
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        else if(head->next == NULL){
            return false;
        }
        else
        {
            ListNode *node=head->next;
            ListNode *temp;
            while(node){
                temp=head;
                while(temp != node){
                    if(node->next == temp)
                    {
                        return true;
                    }
                    temp=temp->next;
                }
                node = node->next;
            }
        }
        return false;
    }
};
