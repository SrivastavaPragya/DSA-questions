#include<climits>

TreeNode<int>*getNextLargerElement(TreeNode<int> *root,int n){
if (root==NULL){
    return root;
}
bool flag=false;

TreeNode<int>*nextLarger=NULL;

if(root->data>n){
    flag=true;
}

for(int i=0;i<root->children->.size();i++){
    TreeNode<int>*temp=getNextLargerElement(root->children[i],n)
    if(nextLarger==NULL){
        nextLarger=temp;
    }else if(temp!=NULL && temp->data<nextLarger->data){
        flag=true;
        nextLarger=temp;
    }
}
return nextLarger
}