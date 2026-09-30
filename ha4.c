#include<stdio.h>
int main(){
     int r,c;                                         //as raw and column must be equal we will take r and c for both the matrix
     printf("Enter number of row :");                    // raw value input
     scanf("%d", &r); 
      printf("Enter number of column :");                // column value input
      scanf("%d", &c);
     int a[r][c];                                        // 1st  array decleration 
     int j, i;
     printf("Enter Array elements of first array are : ");        //  1st array value input 
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &a[i][j]);
	     }
     }
     
     int b[r][c];                                                       //2nd  array decleration
     printf("Enter Array elements of second array are : ");            //  2nd array value input 
     for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		scanf("%d", &b[i][j]);
	     }
     }
     
     printf("The first marix is : \n");                    //  1st array value print 
          for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",a[i][j]);
	     }
	     printf("\n");
     }
     
     printf("The second marix is : \n");                       // 2nd array value print
       for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",b[i][j]);
	     }
	     printf("\n");
     }
     
      int x[r][c];                                      //array decleration for storing result value 
     for(i=0; i<r; i++){                                    // subtracting both the matrix and assigning it to the new array
     	for(j=0; j<c; j++){
     		x[i][j]=a[i][j]-b[i][j];
	     }
     }
     
     printf("The sum of the two marices is : \n");                 //printing result array values
       for(i=0; i<r; i++){
     	for(j=0; j<c; j++){
     		printf("%d ",x[i][j]);
	     }
	     printf("\n");
     }
      return 0;
}
