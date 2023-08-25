// remove leaf nodes
BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL)
	return root;

	if(root->left==NULL && root->right==NULL)
	{
		return NULL;
	}
        BinaryTreeNode<int> * left=removeLeafNodes(root->left);
        BinaryTreeNode<int>* right=removeLeafNodes(root->right);

		root->left=left;
		root->right=right;

	return root;
}