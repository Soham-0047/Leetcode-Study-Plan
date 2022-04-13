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
       /* ListNode *tmp = head;
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
    }*/
        

    unordered_map<int,ListNode*>m;
    int i=0;
    while(head)
    {
        m[i] = head;
        i++;
        head = head->next;
    }
    int ri = m.size() - n;

    if(ri == 0) return m[1];
    
    else{
      m[ri-1]->next = m[ri]->next;
      m[ri]->next = nullptr;
    }
    return m[0];
    }
    
    
        
        
        
};