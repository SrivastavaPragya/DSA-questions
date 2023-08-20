// find height of a binary tree
int height(BinaryTreeNode<int> *root) 
{
	int HeightOfTree=0;
	if(root==NULL)
	return 0;

	int Leftheight=height(root->left);
	int Rightheight=height(root->right);

	if ( Leftheight> Rightheight){
		HeightOfTree=Leftheight;
        } else {
          HeightOfTree = Rightheight;
        }
        return HeightOfTree + 1;
}