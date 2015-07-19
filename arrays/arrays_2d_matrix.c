#include<stdio.h>
#include<malloc.h>


//size definitions

#define MAX 3






//function definitions

void create(int [3][3]);

void display(int [3][3]);

void matadd(int [3][3],int [3][3], int [3][3]);

void matmul(int [3][3],int [3][3], int [3][3]);

void transpose(int [3][3], int [3][3]);






int main(){


	//declare matrix
	int mat1[3][3];
	int mat2[3][3];
	int mat_add[3][3]; //for addition

	int mat_mul[3][3]; //for multiplication
	int mat_trp[3][3]; //for transpose


	printf("enter the first matrix: \n");
	create(mat1);
	
	printf("enter the second matrix: \n");

	create(mat2);
	
	printf("display matrix 1:\n");
	display(mat1);
	
	printf("display matrix 2:\n");
	display(mat2);

	printf("addition of mat1 and mat2: \n");
	
	matadd(mat1,mat2,mat_add);
	display(mat_add);


	printf("multiplication of mat1 and mat2: \n");
	
	matadd(mat1,mat2,mat_mul);
	display(mat_mul);

	printf("transpose of mat1 and mat2: \n");
	
	transpose(mat1,mat_trp);
	display(mat_trp);


	return 0;	
}




void display(int mat[3][3]){


	int i, j;

	for (i = 0;i<MAX;i++){

		for (j = 0;j<MAX;j++){

			printf("%d\t",mat[i][j]);


		}
			printf("\n");
	}


}


void create(int mat[3][3]){


	int i = 0;
	int j = 0;

	
	while(i<MAX){
		j = 0 ;
		while(j<MAX){

			printf("enter the element mat[%d][%d]: \n",i,j);
			scanf("%d",&mat[i][j]);

			j++;


		}
			i++;

	}
	

	printf("\n");

}


//matadd(mat1 , mat2, result matrix)
void matadd(int mat1[3][3], int mat2[3][3], int mat3[3][3] ){

	int i,j;

	for (i=0;i<MAX;i++){

		for(j=0;j<MAX;j++){

			mat3[i][j] = mat1[i][j] + mat2[i][j];


		}
		

	} 

	
}

//matmul(mat1, mat2, result matrix )
void matmul(int mat1[3][3] , int mat2[3][3], int mat3[3][3]){

	int i = 0;
	int j = 0;

	int k = 0;

		while(i<MAX){ //row
			
			j = 0 ;			
			while(j<MAX){ //column
				k = 0;
				mat3[i][j] = 0;
				while(k<MAX){ //iterator through row and col
				
					mat3[i][j] += mat1[i][k]*mat2[k][j];
				
					k++;

				}
				 j++;
			}
			
			 i++;
		
		}



}



//transpose(original matrix, transposed matrix)
void transpose(int mat1[3][3], int mat2[3][3]){

	int i = 0;
	int j = 0;


	while(i<MAX){
		j = 0;
		while(j<MAX){

			mat2[i][j] = mat1[j][i];
			
				j++;

		}
		
		i++;

	}


}

