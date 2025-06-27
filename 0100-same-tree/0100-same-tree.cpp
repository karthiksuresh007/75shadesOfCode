/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};


// ✅ Problem: Same Tree (Leetcode #100)
// 🔗 Link: https://leetcode.com/problems/same-tree/
// 📌 Topic: Binary Tree, DFS, Recursion
// 👨‍💻 Approach:
// 1. Base Case: If both nodes are NULL → return true (both trees ended together)
// 2. If one is NULL and the other is not → return false (structure mismatch)
// 3. If the values of the current nodes differ → return false
// 4. Recursively check both left and right subtrees for equality
// ⏱️ Time: O(n), Space: O(n) [due to recursion stack]
