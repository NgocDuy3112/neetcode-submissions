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
    bool isPalindrome(ListNode* head) {
        stack<int> stk;
        ListNode* cur = head;
        while (cur != nullptr) {
            stk.push(cur->val);
            cur = cur->next;
        }
        cur = head;
        while (cur != nullptr && cur->val == stk.top()) {
            stk.pop();
            cur = cur->next;
        }
        return (cur == nullptr);
    }
};