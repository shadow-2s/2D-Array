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
     int sum =0; 
     for(i=0,j=c-1;i<r && j>=0;i++,j--){
     	sum+=a[i][j];
     }
     printf("Sum of minnor (secondary )diagonal = %d",sum);
      return 0;
}
