#include <stdio.h>

int main(void)
{
        float h;
        printf("0-4 h  : 10\n5-8 h  : 12\n9-12 h : 15\n13++ h : 20\n");

        printf("How many hours did you stay in the parking lot? ");
        scanf("%f", &h);

        if (h >= 0 && h < 5)
                printf("The price is 10 dollars");
        else if (h >= 5 && h < 9)
                printf("The price is 12 dollars");
        else if (h >= 9 && h < 13)
                printf("The price is 15 dollars");
        else if (h >= 13)
                printf("The price is 20 dollars");
        return 0;
}
