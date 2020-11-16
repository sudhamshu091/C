#include <stdio.h>

int main()
{
   int i,j,k,n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){ 
       for(j=n; j >= 1; j--){
            if (j<=i){
                printf("%d",j);}
            else{
                printf(" ");}}
   printf("\n");
   }
}

#include <stdio.h>

/*
Enter a number:6                                                                                                                                
     1                                                                                                                                          
    21                                                                                                                                          
   321                                                                                                                                          
  4321                                                                                                                                          
 54321                                                                                                                                          
654321 
*/
