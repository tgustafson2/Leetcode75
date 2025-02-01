    namespace p2095 {
    public class ListNode {
        public int val;
        public ListNode next;
        public ListNode(int val=0, ListNode next=null) {
            this.val = val;
            this.next = next;
        }
    }
    public class Solution {

        public ListNode DeleteMiddle(ListNode head) {
            if(head.next == null)return null;
            ListNode prev = null, curr = head, fast = head;
            while(fast != null && fast.next != null){
                prev = curr;
                curr = curr.next;
                fast = fast.next.next;
            }
            prev.next = curr.next;
            return head;
        }
    }
}