#include<stdio.h>
int main (){
	int c,r,s=0;                                                 // raw & column variable decleration  also a s variable for sum
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
	for(i=0;i<r;i++){                           // perform sum of all elements
		for(j=0;j<c;j++){
			
				s+=a[i][j];
			
		}
		
	}
	int x =c*r;                                         // taking avarible to count no . of elements
	float avg = s/x;                             //declear and find avrage
	
	printf("the average of all  elements of the matrix is : %f",avg);            // print value  of average of  elements
	
	return 0;
}
