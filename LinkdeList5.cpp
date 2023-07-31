//You have been given a singly linked list of integers where the elements are sorted in ascending order. Write a function that removes the consecutive duplicate values such that the given list only contains unique elements and returns the head to the updated list.


Node *removeDuplicates(Node *head){
	Node*temp=head;
  if (temp == NULL) {
    return head;
  }
  while (temp->next != NULL){
    if (temp->data == temp->next->data){
		temp->next=temp->next->next;
	}
	else{
		temp=temp->next;
	}

  }
  return head;
}
