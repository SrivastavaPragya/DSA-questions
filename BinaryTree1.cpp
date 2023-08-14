// find a node.. whether a node with data x is present or not

bool isNodePresent(BinaryTreeNode<int> *root, int x) 
{
    if(root==NULL)
    return false;
    else if (root->data==x)
    return true;
    bool left= isNodePresent(root->left, x);
    bool right= isNodePresent(root->right, x);
    if(left==true||right==true){
return true;
    }
    return false;
  
}
