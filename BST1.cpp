// searching in bst
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	
if (root==NULL){
	return false;
}
if(root->data==k){
	return true;
}

if(k>root->data){
	bool rightT=searchInBST(root->right , k);
	if(rightT==true)
	{
		return true;
	}

}
if(k<root->data){
		bool leftT=searchInBST(root->left  , k);
		if(leftT==true)
		{
			return true;
		}
	
}
return false;
}
