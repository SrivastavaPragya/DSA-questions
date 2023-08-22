// coding the mirror of a binary tree

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
	if(root==NULL)
	return;

        mirrorBinaryTree(root->left);
		mirrorBinaryTree(root->right);

        if (root->left != NULL && root->right != NULL) 
		{
        BinaryTreeNode<int> *temp=root->left;
		root->left=root->right;
		root->right=temp;
        }
}