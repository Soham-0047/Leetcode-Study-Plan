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
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp  = head;
        ListNode *ptr = head;
        while(tmp != NULL && tmp->next !=NULL){
            ptr = ptr->next;
            tmp = tmp->next->next;
        }
        
        return ptr;
    }
};