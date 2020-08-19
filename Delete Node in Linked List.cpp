/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int item;
        cin>>item;
        ListNode* head=node;
        cout<<item;
        cout<<"First element="<<node->val<<endl;
        while(node->next !=NULL){
            cout<<"Current Item="<<node->val;
            if(node->next->val==item){
                node->next=node->next->next;
            }
            node=node->next;
        }
        node=head;
        while(node)
        {
            cout<<node->val;
            node=node->next;
        }
    }
};