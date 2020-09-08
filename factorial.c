#include <stdio.h>
#include <conio.h>
int main()
{int factorial();
int result,num;
printf("Enter the number:");
scanf("%d",&num);
result=factorial(num);
printf("Factorial=%d",result);
}

int factorial(int n)
{int total;
if(n==0)
    return 1;
else
    total=n*factorial(n-1);
    return(total);
}
