#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, k, s, sum = 0;
    int first[10][10], second[10][10], product[10][10];

    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix:");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("Matrix dimensions don't agree,press any number to exit:");
    else
    {
        printf("Enter the elements of second matrix:");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }

                product[c][d] = sum;
                sum = 0;
            }
        }

        printf("Product of entered matrices:\n");

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%d\t", product[c][d]);

            printf("\n");
        }
    }

}
/*
Enter the number of rows and columns of first matrix:3 3                                                                                       
Enter the elements of first matrix:1 2 3 4 5 6 7 8 9                                                                                           
Enter the number of rows and columns of second matrix:3 3                                                                                      
Enter the elements of second matrix:1 2 3 4 5 6 7 8 9                                                                                          
Product of entered matrices:                                                                                                                   
30      36      42                                                                                                                             
66      81      96                                                                                                                             
102     126     150  
*/
