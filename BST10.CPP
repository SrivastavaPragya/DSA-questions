

// Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space of the order of O(log n).

void convertTreeintoArray(BinaryTreeNode<int> *root, vector<int> &arr)
{
	if(root==NULL)
	return;

	//Storing in sorted order in array i.e., doing inorder traversal
	convertTreeintoArray(root->left, arr);
	arr.push_back(root->data);
	convertTreeintoArray(root->right, arr);

}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
	if(root==NULL)
	return;

	vector<int> arr;
	convertTreeintoArray(root,arr);

	int i=0,j=arr.size()-1;
	while(i<j)
	{
		if(arr[i]+arr[j]==s)
		{
			cout<<arr[i]<<" "<<arr[j]<<endl;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]>s)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
}