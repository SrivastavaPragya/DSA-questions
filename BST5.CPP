
// Given a BST and an integer k. Find and return the path from the node with data k and root (if a node with data k is present in given BST) in a list. Return empty list otherwise.
// Note: Assume that BST contains all unique elements.

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
	if(root==NULL)
	return NULL;

	if(root->data==data)
	{
		vector<int> *v=new vector<int>();
		v->push_back(root->data);
		return v;
	}

	if(data>root->data)
	{
		vector<int> *rightoutput =new vector<int>();
		 rightoutput= getPath(root->right, data);
		
		if(rightoutput!=NULL)
		{
			rightoutput->push_back(root->data);
			return rightoutput;
		}
		
        }

        else if (data < root->data)
		 {
          vector<int> *leftoutput = getPath(root->left, data);

          if (leftoutput != NULL)
                        {
				leftoutput->push_back(root->data);
				return leftoutput;
        }
	
        }
		return NULL;
}