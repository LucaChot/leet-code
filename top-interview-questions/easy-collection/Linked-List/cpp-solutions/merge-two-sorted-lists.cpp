//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/771/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;
        ListNode** curr = &head;
        while(list1 && list2){
            if(list2->val < list1->val){
                *curr = list2;
                curr = &(list2->next);
                list2 = list2->next;
            }else{
                *curr = list1;
                curr = &(list1->next);
                list1 = list1->next;
            }
        }
        if(list1){
            *curr = list1;
        }else{
            *curr = list2;
        }
        return head;
    }
};