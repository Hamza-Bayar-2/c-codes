#include <stdio.h>

int main(void)
{
        float  num = 0.0, i = 0.0, sum = 0, result;
        printf("Enter numbers: ");

        while (scanf("%f", &num) != EOF)
        {
                sum = sum + num;
                i++;
        }
        result = sum/i;
        printf("%.2f", result);
        return 0;
}
