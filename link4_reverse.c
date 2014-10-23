#include<stdlib.h>
#include<stdio.h>

struct node
{

	int data;

	struct node * next;
 
};

struct node * head;

struct node * reverse(struct node * head)
{

	struct node *prev, *current, * next;

	prev = NULL;
	current = head;
	
	while(current != NULL)
	{

		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}

	head = prev;
	return head;
}

struct node * insert(struct	node * head,int data)
{

	struct node* temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;

	if(head == NULL)
	{
		head = temp;

	}
	else
	{
		struct 	node * temp1 = head;
		while(temp1->next != NULL)
			temp1 = temp1->next;
			temp1->next = temp;
	

	}

	return head;

}


void print(	struct	node * head)
{
	while(head != NULL)
	{
		printf("%d",head->data);
	
		head = head->next;

	}
	printf("\n");
}

void printhead(struct node* head)
{
	printf("%p\n",head);


}


int main()
{
	struct node * head = NULL;
	head = insert(head,2);
	printhead(head);
	head = insert(head,4);
	printhead(head);
	head = insert(head,6);
	printhead(head);
	head = insert(head,8);
	printhead(head);
	
	print(head);
   	head = reverse(head);
	print(head);

	return 0;
}



