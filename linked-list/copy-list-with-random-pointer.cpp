/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if(!head){
            return NULL;
         }
         map<Node*,Node* > mp;
         Node *curr = head;
         Node *prev =NULL;
         Node *newHead = NULL;

         while(curr){
            Node *temp = new Node(curr->val);
            mp[curr] = temp;
            if(newHead == NULL){
                newHead = temp;
                prev = temp;
            }else{
                prev->next =temp;
                prev = prev->next;
            }
            curr = curr->next;
         }
        //filling the random Pointer bitch

        curr = head;
        Node *newCur = newHead;

        while(curr){
            if(curr ->random == NULL){
                newCur->random =NULL;
            }else{
                newCur->random = mp[curr->random];
            }
            newCur = newCur->next;
            curr = curr->next;
        }
        return newHead;
        

    }
};