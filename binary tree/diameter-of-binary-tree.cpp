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
private:
    pair<int, int> diameter(TreeNode* root){
        if(root==NULL)
            return {0,0};
        pair<int, int> left = diameter(root->left);
        pair<int, int> right = diameter(root->right);
        int height = max(left.first, right.first) + 1;
        int rootDiameter = left.first + right.first;
        int diameter = max(max(left.second, right.second), rootDiameter);

        return {height, diameter};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).second;
    }
};
