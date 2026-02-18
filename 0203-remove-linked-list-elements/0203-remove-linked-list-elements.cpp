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
        ListNode* temp = head;
        ListNode* dummyhead = new ListNode(-1);
        ListNode* current = dummyhead;
        while(temp!=NULL){
            if(temp->val != val){
                ListNode* newNode = new ListNode(temp->val);
                current->next = newNode;
                current = newNode;
            }
            temp = temp->next;
        }
        return dummyhead->next;
    }
};