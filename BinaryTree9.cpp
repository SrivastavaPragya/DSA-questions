	
    
//     For a given a Binary Tree of type integer, find and return the minimum and the maximum data values.
// Return the output as an object of Pair class, which is already created.
    
    pair<int, int> getMinAndMax(BinaryTreeNode<int>* root) {
    pair<int, int> ans;
    ans.second = ans.first = root->data;

    if (root->left == NULL && root->right == NULL) {
        return ans;
    }

    if (root->left != NULL) {
        pair<int, int> leftans = getMinAndMax(root->left);
        ans.first = min(ans.first, min(leftans.first, leftans.second));
        ans.second = max(ans.second, max(leftans.first, leftans.second));
    }

    if (root->right != NULL) {
        pair<int, int> rightans = getMinAndMax(root->right);
        ans.first = min(ans.first, min(rightans.first, rightans.second));
        ans.second = max(ans.second, max(rightans.first, rightans.second));
    }

    return ans;
}
