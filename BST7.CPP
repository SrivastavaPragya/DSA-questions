// FINDING LCA

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
if(root==NULL)
	return -1;

	if(root->data == a || root->data == b)
	return root->data;
	int leftLca=getLCA(root->left, a, b);
	int rightLca=getLCA(root->right, a, b);
if(leftLca==NULL && rightLca==NULL)
	return -1;
        else if (leftLca == -1 && rightLca != -1)
          return rightLca;
        else if (rightLca == -1 && leftLca != -1)
          return leftLca;
	else 
	return root->data;
}