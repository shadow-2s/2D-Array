#include<stdio.h>
int main (){
	int c,r,s;                                                 // raw & column variable decleration and s a scalar value storing varible
	printf("enter the number of raw of the matrix: ");         //raw value input
	scanf("%d",&r);
	printf("enter the number of column of the matrix:");       //column value input
	scanf("%d",&c);
	int a[r][c];                                            // array decleration
	int i,j;
	printf("Enter the elements of matrix :");     //input array values 
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the scalar to be multiplied :");                 //input scalar values
	   scanf("%d",&s) ;
	printf("The elements of matrix  are:\n");      //array  value print
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	int x[c][r];
	for(i=0;i<r;i++){                           // perform scaler matrix product
		for(j=0;j<c;j++){
			x[i][j]=s*a[i][j];
		}
		
	}
     	printf("The product matrix   is:\n");     // print value  of scaler matrix product
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",x[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
