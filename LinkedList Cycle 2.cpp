/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //**********************************LEET CODE PROBLEM 142*************************************
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        else if( head->next == NULL){
            return NULL;
        }
        else
        {
            ListNode *node=head->next;
            ListNode *temp;
            int i=0;
            while(node){
                temp=head;
                i=0;
                while(temp != node){
                    if(node->next == temp)
                    {
                        return temp;
                    }
                    temp=temp->next;
                }
                node = node->next;
            }
        }
        return NULL;
    }
};


