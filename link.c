#include<stdio.h>
#include<stdlib.h>

struct node	
{	
	int data; //data element

	struct node * next; //pointer to next link
	
};

struct node * head;

void insert(int x)
{

	struct node * temp = (struct node *)malloc(sizeof(struct 		node));
	
	temp->data = x;
	temp->next = head;

	head = temp;
	
	

}

void print()
{

	struct node * temp = head;
	
	printf("The linked list is \n");
	while(temp != NULL)
	{

		
		printf("data: %d \n",temp->data);			
		printf("link: %p \n",temp->next);	
		temp = temp->next;
	}

	printf("\n");

}

int getnum()
{

	int i = 0;
	struct node * temp = head;

	while(temp != NULL)
	{

		temp = temp->next;

		i = i + 1;
	}	
	
	return i;
}


int main()
{

	int i , n,x ;


	head = NULL;	
	
	printf("Enter the number of elements\n");

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{

		printf("enter the data element\n");
		scanf("%d",&x);
		insert(x);


	}
	
	print(); //prints the linked list

	printf("links are %d \n",getnum());	//total number of elements in the list

	return 0;
}
