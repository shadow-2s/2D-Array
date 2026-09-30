#include<stdio.h>
int main (){
	int c,r,s;                                                 // raw & column variable decleration
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
	printf("The elements of matrix  are:\n");      //array  value print
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("The lower tringular elements of matrix  are:\n");  //printing lower tringular matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		if(i>=j){
			printf("%d  ",a[i][j]);}
		}
		printf("\n");
	}
	return 0;
}
