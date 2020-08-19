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
    ListNode* middleNode(ListNode* head) {
        ListNode* myNode=head;
        int i=0,j=0;
        while(myNode)
        {
            i++;
            myNode=myNode->next;
        }
        i=i/2+1;
        cout<<i;
        myNode=head;
        while(myNode)
        {
            j++;
            if(i==j)
            {
                head=myNode;
            }
            myNode=myNode->next;
        }
        return head;
    }
};