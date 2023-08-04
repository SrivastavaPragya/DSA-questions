// finding max data recursively

TreeNode<int>* maxDataNode(TreeNode<int>* root) 
{
   

    TreeNode<int> *max=root;// creating a max and intializng it to root

    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int> *maxchild=maxDataNode(root->children[i]);
        if(maxchild->data>max->data)
        {
            max=maxchild;
        }
    }
    return max;
}