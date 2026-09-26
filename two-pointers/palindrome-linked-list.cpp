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
    ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr != NULL) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}




    bool isPalindrome(ListNode* head) {
        ListNode *slow = head ;
        ListNode *fast = head; 


        while(fast -> next != NULL && fast->next->next !=NULL){
            fast = fast->next->next;
            slow  = slow ->next;
        }

        ListNode *newhead = reverse(slow->next);


        slow->next = newhead;
        slow = slow->next;


        ListNode *OG_head = head;

        while(OG_head != NULL && newhead !=NULL ){
            if(OG_head ->val != newhead->val){
                return false;
            }
            OG_head = OG_head->next;
            newhead =  newhead->next;
        }

        return true;

    }

};