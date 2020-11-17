#include <stdio.h>

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of rows and columns:");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix:");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    printf("Enter the elements of second matrix:");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }

    printf("Sum of entered matrices:\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
}

/*
Enter the number of rows and columns:3 3                                                                                                        
Enter the elements of first matrix:1 2 3 4 5 6 7 8 9                                                                                            
Enter the elements of second matrix:1 2 3 4 5 6 7 8 9                                                                                           
Sum of entered matrices:                                                                                                                        
2       4       6                                                                                                                               
8       10      12                                                                                                                              
14      16      18
*/
