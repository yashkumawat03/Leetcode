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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        
        // Check if k nodes exist
        while(curr != NULL && count < k){
            curr = curr->next;
            count++;
        }
        
        if(count == k){
            
            curr = reverseKGroup(curr, k); // reverse rest
            
            while(count--){
                ListNode* temp = head->next;
                head->next = curr;
                curr = head;
                head = temp;
            }
            
            head = curr;
        }
        
        return head;
    }
    
};