#include <stdio.h>

int main(void)
{
        int line, column, line1, column1,l = 0, c = 0, l1 = 0, c1 = 0;
        
        
        printf("Enter the number of lines: ");
        scanf("%d", &line);

        printf("Enter the number of columns: ");
        scanf("%d", &column);
        
        int matriks[line][column];

        for ( l = 0; l < line; l++)
        {
                for ( c = 0; c < column; c++)
                {
                        printf("Enter the value of the matriks[%d][%d] ==> ", l + 1, c + 1);
                        scanf("%d", &matriks[l][c]);
                }            
        }

        printf("Enter the second number of lines: ");
        scanf("%d", &line1);

        printf("Enter the second number of columns: ");
        scanf("%d", &column1);
        
        int matriks1[line1][column1];

        for ( l1 = 0; l1 < line1; l1++)
        {
                for ( c1 = 0; c1 < column1; c1++)
                {
                        printf("Enter the value of the matriks[%d][%d] ==> ", l1 + 1, c1 + 1);
                        scanf("%d", &matriks1[l1][c1]);
                }            
        }
        printf("The first matriks\n--------------------\n");

        for ( l = 0; l < line; l++)
        {
                for ( c = 0; c < column; c++)
                {
                        printf("%d ", matriks[l][c]);
                }
                printf("\n");
        }
        printf("\n");
        printf("The second matriks\n--------------------\n");


        for ( l1 = 0; l1 < line1; l1++)
        {
                for ( c1 = 0; c1 < column1; c1++)
                {
                        printf("%d ", matriks1[l1][c1]);
                }
                printf("\n");            
        }
        printf("\n");
        

        if (line == line1 && column == column1)
        {
                int summat[line][column];

                for(l = 0; l < line; l++)
                        for(c = 0; c < column; c++)
                                summat[l][c] = matriks[l][c] + matriks1[l][c];
               
        
                printf("The sum of the matriks\n--------------------\n");

                for ( l = 0; l < line; l++)
                {
                        for ( c = 0; c < column; c++)
                        {
                                printf("%d ", summat[l][c]);
                        }
                        printf("\n");            
                }
        }
        else
        printf("We could not sum the matrikses.\nTry agin!");
        
        
        return 0;
}
