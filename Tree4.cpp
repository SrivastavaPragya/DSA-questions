// finding the height of a tree recursively

int getHeight(TreeNode<int>* root) 
{
   

    int ans=0;
    for(int i=0;i<root->children.size();i++)
    {
        int ChildHeight=getHeight(root->children[i]);
        if(ChildHeight>ans)
        ans=ChildHeight;
    }
    return 1+ans;
}