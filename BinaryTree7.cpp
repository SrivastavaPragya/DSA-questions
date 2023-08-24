
// Given a binary tree, check if it is balanced. Return true if given binary tree is balanced, false otherwise.
// Balanced Binary Tree:
// A empty binary tree or binary tree with zero nodes is always balanced. For a non empty binary tree to be balanced, following conditions must be met:
// 1. The left and right subtrees must be balanced.
// 2. |hL - hR| <= 1, where hL is the height or depth of left subtree and hR is the height or depth of right subtree.    

int leftHeight(BinaryTreeNode<int>* root) {
    if (root == NULL)
        return 0;
    
    return 1 + max(leftHeight(root->left), leftHeight(root->right));
}

int rightHeight(BinaryTreeNode<int>* root) {
    if (root == NULL)
        return 0;

    return 1 + max(rightHeight(root->left), rightHeight(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
    if (root == NULL) {
        return true;
    }
    
    int lefth = leftHeight(root->left);
    int righth = rightHeight(root->right);

    if (abs(lefth - righth) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    else
        return false;
}