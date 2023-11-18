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
int mx = 0;
    int maxDepth(TreeNode* root){
        if(root == NULL) return 0;
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);
    }


    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        mx = max(mx, maxDepth(root->left) + maxDepth(root->right));
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return mx;
    }
};
