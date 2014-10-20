// Implementation of how to delete a node


#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node * next;
};

struct node * head;

//defining function

//insert into the list
void insert(int node_data);
{ 

	//define a temp pointer
	struct node * temp = (struct node *)malloc(sizeof(struct node)); 

	//input data 
	temp->data = node_data;
	//point next  to head
	temp->next = head;
	
	//point head to temp

	head = temp;
}	

//print out the list
void print();
{

	struct node * temp;
	
	printf("list is: \t");
	while(temp != NULL)
	{
		printf("%d",temp->data);
	}
	
	print("\n");

}

//delete the nth element
void delete(int n);
{

	struct node* temp1  = head;
	int i;
	
	if(n==1)
	{
		head = temp1->next;
		free(temp1);
		return;

	}
	
	//if n > 0 execute the following

	for (i= 0;i<n-2;i++)
	{
		temp1 = temp1->next;
		//temp1 points to (n-1)th node


	}

	struct  node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

int main()
{
	head = NULL;

	insert(2);
	insert(4);
	insert(6);
	issert(5);
		
	int n;
	
	printf("Enter a position \n");

	scanf("%d" , &n)
	
	delete(n); //delete the nth node 
	
	print();

	return 0;
}
