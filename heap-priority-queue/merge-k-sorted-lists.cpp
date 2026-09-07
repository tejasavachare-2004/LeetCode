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

    ListNode* mergetwosorted(ListNode* L1,ListNode* L2){
        if(!L1){
            return L2;
        }
        if(!L2){
            return L1;
        }

        if(L1->val <= L2->val){
            L1->next = mergetwosorted(L1->next,L2);
            return L1;
        }else{
            L2->next = mergetwosorted(L1 ,L2->next);
            return L2;
        }

        return NULL;
    }

    ListNode* partition(int s , int e  ,vector<ListNode*>& list){
        if(s == e){return list[s];}
        if(s>e){
            return NULL;
        }

        int mid =s +(e-s)/2;

        ListNode* L1 = partition(s,mid,list);
        ListNode* L2 = partition(mid+1,e,list);

        return mergetwosorted(L1,L2);


    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();

        if(n== 0) return NULL;

        return partition(0,n-1,lists);
    }
};