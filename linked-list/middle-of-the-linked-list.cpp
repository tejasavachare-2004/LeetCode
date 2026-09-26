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
        ListNode *trav = head;
        int count =0;
        while(trav != NULL){
            count++;
            trav = trav->next;
        }
        int n =( count  /2)+1;
        trav = head;
        for(int i =1 ; i< n ; i++){
            trav = trav->next;
        }
        head = trav;

            return trav;

    }


};