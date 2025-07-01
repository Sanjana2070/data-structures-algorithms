void inorder(TreeNode* root, vector<int>& sol){
    if(root==NULL)
        return;
    inorder(root->left, sol);
    sol.push_back(root->val);
    inorder(root->right, sol);
}

void preorder(TreeNode* root, vector<int>& solution){
  if(root==NULL)
    return;

  solution.push_back(root->val);
  preorder(root->left,solution);
  preorder(root->right,solution);
}

void postorder(TreeNode* root, vector<int>& sol){
  if(root==NULL)
    return;
  postorder(root->left, sol);
  postorder(root->right, sol);
  sol.push_back(root->val);
}
