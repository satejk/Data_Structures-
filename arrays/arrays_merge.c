#include<stdio.h>

#include<malloc.h>

#define MAX1 5
#define MAX2 7


int *arr;

int * create(int);

void sort(int*,int);

int* merge(int *,int*);

void display(int*,int);


int main(){

	int *a,*b,*c;

	printf("create a array 1 \n");

	a = create(MAX1);

	display(a,MAX1);

	sort(a,MAX1);

	display(a,MAX1);


	b = create(MAX2);


	display(b,MAX2);

	sort(b,MAX2);

	display(b,MAX2);


	c = merge(a,b);

	display(c,(MAX1 + MAX2));

	return 0;
}


void display(int*arr,int size){

	
	int *ptr = arr;
	while(ptr < arr + size){

		printf("%d \t",*ptr++);			
		
	}
		
	printf("\n");
}


int* create(int size){

	int *arr ;
	int i = 0;

	
	arr = (int *)malloc(sizeof(int)*size);

	int *ptr = arr;
	int *ptr_limit = arr + size;
	while(ptr < ptr_limit  ){

		printf("enter the element no %d   ",i+1);
		scanf("%d",ptr);
		ptr++;
		i++;
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

int* merge(int *arr1, int *arr2){

	int *arr3;

	int size = MAX1 + MAX2;

	arr3 = (int*)malloc(sizeof(int)*size);


	int i,j,k;


	for(i=0,j=0,k = 0;k<=size;k++){


		if (arr1[i]<arr2[j]){

			arr3[k] = arr1[i];

			i++;

			if (i>MAX1){

				for(i++;j<MAX2;j++,k++){

					arr3[k] = arr2[j];

				}



			}


		}
		else{
	
			arr3[k] = arr2[j];
			
			j++;

			if(j>MAX2){

				for(j++;i<MAX1;i++,k++){

					arr3[k] = arr1[i];



				}


			}
			

		}


		
	}


	return arr3;

}





