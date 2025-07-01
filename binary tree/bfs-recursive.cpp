class Solution {
private:
    int height(TreeNode* root){
        if (root == NULL)
            return 0;
        int ls = height(root->left);
        int rs = height(root->right);
        return max(ls, rs) + 1;
    }

    void klevel(TreeNode* root, int k, vector<int>& ans){
        if (root == NULL)
            return;
        if (k == 1)
            ans.push_back(root->val);
        else {
            klevel(root->left, k - 1, ans);
            klevel(root->right, k - 1, ans);
        }
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> solution;
        int h = height(root);
        for (int i = 1; i <= h; i++) {
            vector<int> levelNodes;
            klevel(root, i, levelNodes);
            solution.push_back(levelNodes);
        }
        return solution;
    }
};
