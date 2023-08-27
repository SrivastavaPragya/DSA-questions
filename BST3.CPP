// CONSTRUCT A BINARY TREE FORM A SORTED AARAY

BinaryTreeNode<int>* constructingHelper(int *input, int si, int ei)
{
	if(si>ei)
	return NULL;

	int rootIndex = (si+ei)/2;
	BinaryTreeNode<int> *root=new BinaryTreeNode<int>(input[rootIndex]);
        BinaryTreeNode<int> *leftnode = constructingHelper(input, si, rootIndex - 1);
        BinaryTreeNode<int> *rightnode = constructingHelper(input,rootIndex+1,ei);

        root->left=leftnode;
	root->right=rightnode;

	return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
	return constructingHelper(input, 0, n-1);
}