
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr)return nullptr;
        ListNode *prev = nullptr, *curr = head, *fast = head;
        while(fast && fast->next){
            prev = curr;
            curr = curr->next;
            fast = fast->next->next;
        }

        prev->next = curr->next;
        return head;
    }
};