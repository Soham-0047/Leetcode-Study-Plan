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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp = head;
        ListNode *ptr = head;
        ListNode *tmp1;
        for(int i=0;i<n;i++){
            
            if(tmp->next ==NULL){
                
                if(i == n-1){
                    tmp1 = head;
                    head = head->next;
                    delete(tmp1);
                }
                return head;
            }
            tmp = tmp->next;
        }
        
        while(tmp->next!=NULL){
            ptr = ptr->next;
            tmp = tmp->next;
            
        }
        
        tmp1 = ptr->next;
        ptr->next = ptr->next->next;
        delete(tmp1);
        
        return head;
    }
};