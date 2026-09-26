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
    ListNode* oddEvenList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *even_head = head->next;
        ListNode *odd_head = head;

        ListNode *even = even_head;
        ListNode *odd = odd_head;


        while(even != NULL && even->next != NULL ){
            odd->next =odd ->next->next;
            even->next=even->next->next;            
            
            odd = odd->next;
            even = even->next;
        }

odd->next = even_head;

        return odd_head;
    }
};