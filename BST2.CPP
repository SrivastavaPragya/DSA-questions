// Code: Print Elements in Range
// Send Feedback
// Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
// Print the elements in increasing order.

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    if (root == NULL) {
        return;
    }

    if (k1 <= root->data && k2 >= root->data) {
        elementsInRangeK1K2(root->left, k1, k2);
        cout << root->data << " ";
        elementsInRangeK1K2(root->right, k1, k2);


    } else if (k1 < root->data && k2 < root->data) {
        elementsInRangeK1K2(root->left, k1, k2);

		
    } else if (k1 > root->data && k2 > root->data) {
        elementsInRangeK1K2(root->right, k1, k2);
    }
}