 //Code: Midpoint of LL

//For a given singly linked list of integers, find and return the node present at the middle of the list.

 
 Node *midPoint(Node *head)
{
  

  if (head == NULL || head->next==NULL) {

    return head;
  }
   Node *fast = head->next;
  Node *slow =head ;
  while (fast != NULL && fast->next != NULL) {

    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}
