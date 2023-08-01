//Given a singly linked list of integers and an integer n, find and return the index for the first occurrence of 'n' in the linked list. -1 otherwise.
int findNodeRec(Node *head, int n)
{
	//Write your code here
        if (head == NULL) {
          return -1;
        }
        if (head->data == n)
          return 0;

        int pos = findNodeRec(head->next, n);

        if (pos == -1)
          return -1;

        return pos + 1;
}