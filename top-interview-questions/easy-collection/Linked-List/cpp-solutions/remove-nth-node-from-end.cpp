//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode** to_remove = &head;
        int pos = 0;
        while(curr){
            if(pos >= n){
                to_remove = &((*to_remove)->next);
            }
            curr = curr->next;
            pos++;
        }
        *to_remove = (*to_remove)->next;
        return head;
    }
};