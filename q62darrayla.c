#include<stdio.h>
int main(){
     int r,c;
     printf("Enter number of row :");
     scanf("%d", &r);
      printf("Enter number of column :");
      scanf("%d", &c);
     int a[r][c];
     int j, i;
     printf("Enter matrix elements  : ");
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     
     printf("The transpose marix is : \n");
          for(i=0; i<c; i++){
     	for(j=0; j<r; j++){
     		printf("%d ",a[j][i]);
	     }
	     printf("\n");
     }
     
     return 0;
}
