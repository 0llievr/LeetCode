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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int smallest = INT_MAX;
        int smallestlist = 0;
        ListNode *Head = new ListNode(69);
        ListNode *ptr = Head;  
        bool run=true;

        if(lists.size() == 0){
                return Head->next;
        }
        
        while(run){
            //find smallest of list
            for(int i = 0; i < lists.size(); i++){
                if(lists[i]!=nullptr && lists[i]->val < smallest){
                    smallest = lists[i]->val;
                    smallestlist = i;
                }
            }
            
            //move smallest to new list if found            
            if(smallest != INT_MAX){
                ptr->next = new ListNode(smallest);
                ptr= ptr->next; 
                lists[smallestlist] = lists[smallestlist]->next;                
            }

            //Reset Stats
            smallest = INT_MAX;
            smallestlist = 0;
            run = false;
            
            //check to see if done
            for(auto x : lists){
                if (x != nullptr){
                    run = true;
                }
            }
        }
        return Head->next;
    }
};