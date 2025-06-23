/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};




// ✅ Problem: Linked List Cycle (Leetcode #141)
// 🔗 Link: https://leetcode.com/problems/linked-list-cycle/
// 📌 Topic: Linked List, Two Pointers, Floyd’s Cycle Detection
// 👨‍💻 Approach:
// 1. Use two pointers: slow (moves 1 step) and fast (moves 2 steps)
// 2. If there's a cycle, fast and slow will eventually meet inside the loop
// 3. If fast reaches the end (NULL), then no cycle exists
// 4. This is known as Floyd’s Tortoise and Hare algorithm
// ⏱️ Time: O(n), Space: O(1)
