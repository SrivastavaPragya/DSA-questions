// t find whether the tree is idntical or not

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1==NULL || root2==NULL)
    return false;
    if(root1->data!=root2->data)
    return false;
    if(root1->children.size()!=root2->children.size())
    return false;
    for(int i=0;i<root1->children.size() && root2->children.size();i++)
    {
        bool ans=areIdentical(root1->children[i],root2->children[i]);
        if(ans==false)
        return false;
       
    }
    return true;
}