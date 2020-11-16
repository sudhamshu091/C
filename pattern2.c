#include <stdio.h>

int main()
{
   int i,j,k,n;
   int m = 'A';
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            printf("%c",m);
            m = m + 1;
        }
        printf("\n");
       }
}

/*
Enter a number:6                                                                                                                                
A                                                                                                                                               
BC                                                                                                                                              
DEF                                                                                                                                             
GHIJ                                                                                                                                            
KLMNO                                                                                                                                           
PQRSTU  
*/
