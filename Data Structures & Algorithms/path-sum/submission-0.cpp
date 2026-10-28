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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        stack<pair<TreeNode*, int>> stk;
        stk.push({root, root->val});
        
        while (!stk.empty()) {
            auto [curr, sum] = stk.top();
            stk.pop();
            
            if (!curr->left && !curr->right && sum == targetSum) {
                return true;
            }

            if (curr->right) {
                stk.push({curr->right, sum + curr->right->val});
            }

            if (curr->left) {
                stk.push({curr->left, sum + curr->left->val});
            }
        }
        
        return false;
    }
};