
// For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
// The root will remain the same. So you just need to insert nodes in the given Binary Tree.


// After making the changes to the above-depicted tree, the updated tree will look like this.

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
  if(root==NULL){
      return ;
  }
      BinaryTreeNode<int> *dub=new BinaryTreeNode<int>(root->data);
         BinaryTreeNode<int> *temp=root->left;
          root->left=dub;
      dub->left=temp;
        insertDuplicateNode(temp);
    insertDuplicateNode(root->right);
}