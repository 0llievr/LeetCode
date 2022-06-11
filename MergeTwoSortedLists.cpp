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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* Merged = new ListNode();
        ListNode* ptr = Merged;

        while(list1 != nullptr || list2 != nullptr){
            

            if(list1 == nullptr){
                ptr->next = list2;//add list 2
                ptr = ptr->next; //increment ptr
                list2 = list2->next;//increment list 2
                continue;
            }
            
            if(list2 == nullptr){
                ptr->next = list1;//add list 1
                ptr = ptr->next; //increment ptr
                list1 = list1->next;//increment list 1
                continue;
            }
            
            if(list1->val > list2->val){
                ptr->next = list2;//add list 2
                ptr = ptr->next; //increment ptr
                list2 = list2->next;//increment list 2
            }else{
                ptr->next = list1;//add list 1
                ptr = ptr->next; //increment ptr
                list1 = list1->next;//increment list 1
            }
        }
        
        return Merged->next;
    }
};