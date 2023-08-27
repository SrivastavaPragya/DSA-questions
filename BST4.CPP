// CONVERT BST INTO LL

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        return NULL;
    }

    Node<int>* left = constructLinkedList(root->left);
    Node<int>* right = constructLinkedList(root->right);

    Node<int>* newNode = new Node<int>(root->data);
    Node<int>* temp = left;

    // Find the end of the left list.
    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }

    // Connect the newNode to the end of the left list.
    if (temp != NULL) {
        temp->next = newNode;
    }
    else {
        left = newNode;
    }

    // Connect the right list to the newNode.
    newNode->next = right;

    return left;
}
