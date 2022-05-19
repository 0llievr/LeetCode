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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        struct ListNode* tmp = new ListNode;
        struct ListNode* prv = tmp;
        struct ListNode* cur = head;
        
        while(cur && cur->next){
            prv->next = cur->next;
            cur->next = cur->next->next;
            prv->next->next = cur;
            prv = cur;
            cur = cur->next;
        }
        
        return tmp->next;
    }
};