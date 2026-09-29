#include<stdio.h>
int main(){
     int r1,c1,r2,c2,sum=0;
     printf("Enter number of row for first matrix:");
     scanf("%d", &r1);
      printf("Enter number of column for first matrix :");
      scanf("%d", &c1);
      
     int a[r1][c1];
     int j, i,k;
     printf("Enter Array elements of first array are : ");
     for(i=0; i<r1; i++){
     	for(j=0; j<c1; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     printf("Enter number of row for second matrix:");
     scanf("%d", &r2);
      printf("Enter number of column for second matrix :");
      scanf("%d", &c2);
     int b[r2][c2];
     printf("Enter Array elements of second array are : ");
     for(i=0; i<r2; i++){
     	for(j=0; j<c2; j++){
     		scanf("%d", &b[i][j]);
	     }
     }
     
     printf("The first marix is : \n");
          for(i=0; i<r1; i++){
     	                for(j=0; j<c1; j++){
     	               	printf("%d ",a[i][j]);
	     }
	     printf("\n");
     }
     
     printf("The second marix is : \n");
       for(i=0; i<r2; i++){
     	               for(j=0; j<c2; j++){
     		              printf("%d ",b[i][j]);
	     }
	     printf("\n");
     }
     
     int x[r1][c2];
     if(c1==r2){
      
      
     for(i=0; i<r1; i++){
     	for(j=0; j<c2; j++)
	     { 
	       for(k=0;k<c1;k++){
		
     	                        sum +=(a[i][k]*b[k][j]) ;
					  
			      	}
			      	x[i][j]=sum;
			      	sum=0;
	     }
     }
     printf("The product of the two marices is : \n");
       for(i=0; i<r1; i++){
     	for(j=0; j<c2; j++){
     		printf("%d ",x[i][j]);
	     }
	     printf("\n");
     }
     }
     else { printf("The product of the two marices is not possible \n");
     }
     
      return 0;
}
