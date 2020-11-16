#include <stdio.h>

int main()
{
   int i,j,k,n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if (j<=i){
               printf("%d",j);}
            else{
                printf(" ");
            }
       }
       printf("\n");
    }
}

/*
Enter a number:7                                                                                                                                
1                                                                                                                                               
12                                                                                                                                              
123                                                                                                                                             
1234                                                                                                                                            
12345                                                                                                                                           
123456                                                                                                                                          
1234567
*/
