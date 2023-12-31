


// Given a generic tree, print the post-order traversal of given tree.
// The post-order traversal is: visit child nodes first and then root node.
void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
    return;
    for(int i=0;i<root->children.size();i++)
    {
        printPostOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}