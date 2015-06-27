#include<stdio.h>


#define MAX 5


//insert a element to an array
void insert(int *, int pos,int num);

//delete an element from an array
void del(int *,int pos);

//reverse the contents of an array
void reverse(int *);

//display the contents of an array
void display(int*);

//search a element in an array
void search(int*,int num);


//reverse a entire array
void reverse(int *);

//search the array
void search(int* , int num);

int main(){

	int arr[MAX];
	int i;


	printf("entering the elements into the array\n");
	/*
	for(i = 0;i<MAX;i++){

		scanf("%d",&arr[i]);

	}
	
	*/
	insert(arr,0,10);
	insert(arr,1,11);
	insert(arr,2,22);
	insert(arr,3,33);
	insert(arr,4,44);
	insert(arr,5,55);
	insert(arr,6,66);
	
	display(arr);

	insert(arr,2,888);
	display(arr);

	del(arr,3);
	printf("after deleting\n");

	display(arr);

	del(arr,1);
	printf("after deleting\n");

	display(arr);
	insert(arr,1,555);
	display(arr);

	//reverse the array

	reverse(arr);
	display(arr);

	search(arr,33);
	search(arr,32);




	return 0;
}

void display(int *arr){

	int i;

	printf("The contents of the array are:\n");

	for(i =0;i<MAX;i++){
		
		printf("%d \t",arr[i]);

	}

	
	printf("\n");

}

void insert(int *arr,int pos, int num){


	int i;

	for (i = MAX-1;i>pos;i--){
		
		arr[i] = arr[i-1];
	
	}
	
	arr[i] = num;

	printf("entered %d in the array\n",num);

}



void del(int *arr,int pos){

	int i;


	for (i= pos;i<MAX;i++){

		arr[i-1] = arr[i];

	}

	arr[i-1] = 0;

}


void reverse(int *arr){

	int i , temp;

	for(i=0;i<(MAX/ 2);i++){

		temp = arr[i];

		arr[i] = arr[MAX-1-i];
		
		arr[MAX-1-i] = temp;
		
	}


}



void search(int *arr, int num ){

	int i,j;

	for(i =0;i<MAX;i++){

			if(num == arr[i]){

				printf("element found : in array = %d , num = %d \n",arr[i],num);

					//break;
					return;
			}

	}


	if(i==MAX){
	
		printf("element %d not found in the array \n",num);	
	}

}





