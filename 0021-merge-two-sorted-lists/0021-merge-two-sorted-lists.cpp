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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while(t1 != NULL && t2 != NULL) {
            if(t1->val < t2->val) {
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            }
            else {
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }
        if(t1) {
            temp->next = t1;
        }
        if(t2) {
            temp->next = t2;
        }
        return dummy->next;
    }
    
};


// ✅ Problem: Merge Two Sorted Lists (Leetcode #21)
// 🔗 Link: https://leetcode.com/problems/merge-two-sorted-lists/
// 📌 Topic: Linked List, Two Pointers
// 👨‍💻 Approach:
// 1. Create a dummy node to simplify the result list construction
// 2. Use two pointers (t1 and t2) to traverse both input lists
// 3. At each step, attach the smaller value node to the merged list
// 4. Move the pointer of the list from which the node was taken
// 5. After the loop, attach the remaining nodes from either list
// 6. Return dummy->next as the head of the merged list
// ⏱️ Time: O(n + m), Space: O(1)

