#include<stdio.h>
int main(){
     int r,c;                                          // raw & column variable decleration
     printf("Enter number of row :");               //raw value input
     scanf("%d", &r);
      printf("Enter number of column :");                   //column value input
      scanf("%d", &c);
     int a[r][c];                                      // array decleration
     int j, i;
     printf("Enter matrix elements  : ");              //input array values 
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     printf("The elements of matrix  are:\n");      //array  value print
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
     
     printf("The transpose marix is : \n");                // print transpose matrix
          for(i=0; i<c; i++){
     	for(j=0; j<r; j++){
     		printf("%d  ",a[j][i]);
	     }
	     printf("\n");
     }
     
     return 0;
}
