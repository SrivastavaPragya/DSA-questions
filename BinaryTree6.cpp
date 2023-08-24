// finding the sum nodes

int getSum(BinaryTreeNode<int>* root) {
    // Write your code here
	if(root==NULL)
	{
		return NULL ;
	}

	return root->data + getSum(root->left) +getSum(root->right);
}