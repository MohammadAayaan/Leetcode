void inorderHelper(struct TreeNode* root, int* res, int* returnSize){
    if(root == NULL) return;

    inorderHelper(root->left, res, returnSize);
    res[(*returnSize)++] = root->val;
    inorderHelper(root->right, res, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = 0;
    int* res = (int*)malloc(1000 * sizeof(int)); // assume max 1000 nodes
    inorderHelper(root, res, returnSize);
    return res;
}
