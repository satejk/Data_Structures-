
//inserting node at the nth position

#include<stdio.h>
#include<stdlib.h>


struct node	
{	
	int data; //data element

	struct node * next; //pointer to next link
	
};

struct node * head;

void insert(int data , int n)
{	
	int i;

	struct node * temp1 = (struct node *)malloc(sizeof(struct 		node));
	
	temp1->data = data;
	temp1->next = NULL;

	if(n==1){
		temp1->next = head;
		head = temp1;
		return;
	}
	
	struct node * temp2 = (struct node *)malloc(sizeof(struct node));
	
	temp2 = head;
	for (i = 0;i<n-2;i++){

	temp2 = temp2->next;


	}
	temp1->next = temp2->next;
	temp2->next = temp1;

}

void print()
{

	struct node * temp = head;
	
	printf("The linked list is \n");
	while(temp != NULL)
	{

		
		printf("data: %d\t",temp->data);			
		//printf("link: %p \n",temp->next);	
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
	insert(2,1);
	insert(3,2);
	insert(4,1);
	insert(5,2);
	
	print(); //prints the linked list

	printf("links are %d \n",getnum());	//total number of elements in the list

	return 0;
}
