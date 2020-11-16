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
   
        for(j=n; j >= 1; j--){
            if (j<=i){
                printf("%d",j);}
            else{
                printf(" ");}}
        printf("\n");
        }
    }


/*
Enter a number:7                                                                                                                                
1            1                                                                                                                                  
12          21                                                                                                                                  
123        321                                                                                                                                  
1234      4321                                                                                                                                  
12345    54321                                                                                                                                  
123456  654321                                                                                                                                  
12345677654321  
*\
