#include <stdio.h>

int main()
{
    int m, n, c, d, first[10][10], transpose[10][10];

    printf("Enter the number of rows and columns of matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix:");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            transpose[d][c] = first[c][d];
        }
    }

    printf("Transpose of entered matrix:\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
        {
            printf("%d\t", transpose[c][d]);
        }
        printf("\n");
    }
}

/*
Enter the number of rows and columns of matrix:3 3                                                                                              
Enter the elements of matrix:1 2 3 4 5 6 7 8 9                                                                                                  
Transpose of entered matrix:                                                                                                                    
1       4       7                                                                                                                               
2       5       8                                                                                                                               
3       6       9    
*/
