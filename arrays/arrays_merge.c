#include<stdio.h>

#include<malloc.h>

#define MAX1 5
#define MAX2 7


int *arr;

//create and array
int * create(int);

//sort an array
void sort(int*,int);

//merge an array
void merge(int *,int*);

//display the array
void display(int*,int);


int main(){

	int *a,*b,*c;

	printf("create a array 1 \n");

	a = create(MAX1);

	display(a,MAX1);

	sort(a,MAX1);

	display(a,MAX1);

	return 0;
}


void display(int*arr,int size){

	int i;

	for (i = 0;i<size;i++){

		printf("%d \t",arr[i]);			

	}
		
	printf("\n");
}


int* create(int size){

	int *arr , i;

	
	arr = (int *)malloc(sizeof(int)*size);


	for(i=0;i<size;i++){

		printf("enter the element no %d   ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\n");
	return arr;

};




void sort(int *arr, int size){


	int temp, i , j;

	for(i=0;i<size;i++){

		for(j = i+1 ;j<size;j++){
				
				if(arr[i]>arr[j]){
					
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}


		}

	}



}
