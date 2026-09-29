#include<stdio.h>
int main(){
     int r,c;
     printf("Enter number of row :");
     scanf("%d", &r);
      printf("Enter number of column :");
      scanf("%d", &c);
     int a[r][c];
     int j, i;
     printf("Enter Array elements of first array are : ");
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     
     int b[r][c];
     printf("Enter Array elements of second array are : ");
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &b[i][j]);
	     }
     }
     
     printf("The first marix is : \n");
          for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",a[i][j]);
	     }
	     printf("\n");
     }
     
     printf("The second marix is : \n");
       for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",b[i][j]);
	     }
	     printf("\n");
     }
     
      int x[r][c];
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		x[i][j]=a[i][j]+b[i][j];
	     }
     }
     
     printf("The sum of the two marices is : \n");
       for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",x[i][j]);
	     }
	     printf("\n");
     }
      return 0;
}
