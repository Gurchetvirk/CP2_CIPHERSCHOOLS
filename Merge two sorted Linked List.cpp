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

//************************************************This is leet  code solution***********************************************

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> v;
        while(l1){
            v.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            v.push_back(l2->val);
            l2=l2->next;
        }
        sort(v.begin(),v.end());
        ListNode *prev=NULL,*curr=new ListNode(),*resultNode;
        resultNode=curr;
        for(int i=0;i<v.size();i++)
        {
            curr->val=v[i];
            curr->next=NULL;
            if(prev== NULL){
                prev=curr;
            }
            else{
                prev->next=curr;
                prev=curr;
            }
        }
        return head;
    }
};