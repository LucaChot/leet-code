//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/772/

public class PalindromeLinkedList {
    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
     
    
    class Solution {
        public boolean isPalindrome(ListNode head) {
            ListNode curr = head;
            ListNode prev = null;
            ListNode reverse = head;
            while(curr != null){
                reverse = new ListNode(curr.val, prev);
                prev = reverse;
                curr = curr.next;
            }
            curr = head;
            while(curr != null && reverse != null && curr != reverse){
                if(curr.val != reverse.val){
                    return false;
                }
                curr = curr.next;
                reverse = reverse.next;            
            }
            return true;
        }
    }
}

//Definition for singly-linked list.
