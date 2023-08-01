// delete n nodes ,keep m nodes

Node *skipMdeleteN(Node *head, int M, int N)
{
	if(head==NULL)
	return head;

	if(M==0)
	return NULL;

	if(N==0)
	return head;

	Node *temp=head;
	Node *t;
	while(temp!=NULL)
	{
		for(int i=1;i<M && temp!=NULL;i++)
		{
			temp=temp->next;
		}
		

		t=temp->next;
		for(int i=1;i<=N && t!=NULL;i++)
		{
			t=t->next;
		}
		temp->next=t;
		temp=t;
	}
		return head;
}