#include <stdio.h>

int main()
{
   int i,j,k,n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            printf("%d",j);}
        printf("\n");
       }
}

/*
Enter a number:7                                                                                                                                
1                                                                                                                                               
21                                                                                                                                              
321                                                                                                                                             
4321                                                                                                                                            
54321                                                                                                                                           
654321                                                                                                                                          
7654321 
*/
