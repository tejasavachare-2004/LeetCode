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

    ListNode *findnode(ListNode *temp,int k){
        

        while(k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }



    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0 ){
            return head;
        }

        ListNode *tail = head;
        int len = 1 ;
        while(tail ->next !=  NULL){
            len++;
            tail = tail->next;
        }
        if(k % len == 0){
            return head;
        }
        k = k%len;
        tail->next = head;

        ListNode *newlast  = findnode(head,len-k-1);
        head = newlast->next;
        newlast->next = NULL;

        return head;
    }
};