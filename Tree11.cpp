#include<bits/stdc++.h>
// Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
// Note: Return NULL if no node is present with the value greater than n.


void getnext(TreeNode<int> *root , TreeNode<int> **maxelement, int *max, int x)
{
    if(root->data > x && root->data < *max)
    {
        *maxelement=root;
        *max=root->data;
    }

    for(int i=0;i<root->children.size();i++)
    {
        getnext(root->children[i],maxelement,max,x);
    }
}

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL)
    return NULL;

    if(root->children.size()==0)
    return root;

    TreeNode<int> *maxelement;
    int max=INT_MAX;
    getnext(root, &maxelement, &max ,x);
     return maxelement;


}