#include <stdio.h>

int main()
{
   int i,j,k,n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            printf("*");}
        printf("\n");
       }
}

/*
Enter a number:7                                                                                                                                
*                                                                                                                                               
**                                                                                                                                              
***                                                                                                                                             
****                                                                                                                                            
*****                                                                                                                                           
******                                                                                                                                          
******* 
*/
