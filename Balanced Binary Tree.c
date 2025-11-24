int height(struct TreeNode* root){
    if(root == NULL) return 0;

    int leftHeight = height(root->left);
    if(leftHeight == -1) return -1;

    int rightHeight = height(root->right);
    if(rightHeight == -1) return -1;

    if(leftHeight - rightHeight > 1 || rightHeight - leftHeight > 1) return -1;

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}
