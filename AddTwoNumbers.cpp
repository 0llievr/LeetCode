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
    int mySum(int a, int b, int &c){
        int rtn = (a + b + c)%10;
        c =  (a + b + c)/10;
        return(rtn);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //dont need to check if l1 or l2 are empty, given they are populated
        int carry = 0;
        ListNode* ptr;

        //make head point ptr at it
        ListNode* Head = new  ListNode( mySum(l1->val, l2->val, carry) );
        ptr = Head;
        
        //work one node in the future to detect the end of the list 
        while(l1->next != NULL || l2->next != NULL){
            
            //if l1 empty
            if(l1->next == NULL){
                //pass in 0 for a null l1 node
                ptr->next = new ListNode( mySum(0, l2->next->val, carry) );
                //Increment pointers
                ptr = ptr->next;
                l2=l2->next;
                
            //if l2 empty
            }else if(l2->next == NULL){
                //pass in 0 for a null l2 node
                ptr->next = new ListNode( mySum(l1->next->val, 0, carry) );
                //Increment pointers
                ptr = ptr->next;
                l1=l1->next;
                
            }else{
                //add values and move ptr and l1 and l2
                ptr->next = new ListNode( mySum(l1->next->val, l2->next->val, carry) );
                //Increment pointers
                ptr = ptr->next;
                l1=l1->next;
                l2=l2->next;
            }
        }
        
        //Add carry to end of list
        if(carry != 0){
            ptr->next = new ListNode(carry);
        }
        
        return Head;
    }
};