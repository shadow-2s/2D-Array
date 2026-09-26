#include<stdio.h>
int main(){
     int r,c;
     printf("Enter size of row and column : ");
     scanf("%d%d", &r, &c);
     int a[r][c];
     int j, i, x=0;
     printf("Enter Array elements are : ");
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		x+=a[i][j];
	     }
     }
     printf("Array elements s = %d ", x);
     return 0;
}
