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


 *******************************************LEET CODE PROMBLEM 82*******************************************************
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *myNode=head;
        int item=head->val;
        int count=0;
        ListNode *prev=NULL;
        myNode=head->next;
        while(myNode){
            if(myNode->val==item){
                count++;
            }
            else{
                if(count>0){
                    if(prev==NULL){
                        head=myNode;
                    }
                    else{
                        prev->next=myNode;
                    }
                }
                else{
                    if(prev==NULL){
                        prev=head;
                    }
                    else
                        prev=prev->next;
                }
                    item=myNode->val;
                    count=0;
            }
            myNode=myNode->next;
        }
        if(count>0){
            if(prev==NULL){
                return NULL;
            }
            prev->next=myNode;
        }
        return head;
    }
};
