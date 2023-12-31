
//Given a generic tree and an integer x,
 //check if x is present in the given tree or not. Return true if x is present,
 // return false otherwise.

bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here

    if(root->data==x)
    return true;

    for(int i=0;i<root->children.size();i++)
    {
        bool value=isPresent(root->children[i],x);
        if(value==true)
        return true;
    }
    return false;
}