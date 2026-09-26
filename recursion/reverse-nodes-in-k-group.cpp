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

    ListNode* reverseList(ListNode* head) {
       
       if(head == NULL || head -> next == NULL){
        return head;
       }

       ListNode *newhead = reverseList(head->next);
       ListNode *front = head -> next;
       front->next = head;
       head ->next = NULL;

       return newhead;
    }

    ListNode* find_k_th(ListNode *head ,int k){
        k-=1;
        while(head != NULL && k>0){
            head =head->next;
            k--;
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp =head;
        ListNode* prevLast = NULL; 

        while(temp != NULL){
            ListNode* kthnode =find_k_th(temp,k);
            if(kthnode == NULL){
                if(prevLast){
                    prevLast->next = temp;
                }
                break;
            }
            ListNode *nextnode = kthnode->next;
            kthnode->next = NULL;
            reverseList(temp);
            if(temp == head){
                head = kthnode;
            }else{
                prevLast->next = kthnode;
            }
            prevLast =temp;
            temp = nextnode;
        }
        return head;
    }
};