//count leaf node


int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    int ans=0;
    
    

    if(root->children.size()==0)
    ans=1;

    for(int i=0;i<root->children.size();i++)
    {
        ans +=getLeafNodeCount(root->children[i]);
    }

    return ans;
}