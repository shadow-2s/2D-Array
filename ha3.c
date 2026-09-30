#include<stdio.h>
int main (){
	int c,r,s;                                                 // raw & column variable decleration        &      s is the smallest element
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
	s=a[0][0];                                     //assuming that a[0][0] is smallest
		for(i=0;i<r;i++){                           // perform sum of diadonal elements
		for(j=0;j<c;j++){
			if(a[i][j]<s){
				s=a[i][j];
			}
		}
		
	}
	printf("the smallest elements of the matrix is : %d",s);            // print value  of sum of diagonal elements
	
	return 0;
}
