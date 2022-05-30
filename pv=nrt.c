#include <stdio.h>
#include <math.h>

int main(void)
{
        int num;
        float p, v, n, r = 8.3145, t;

        printf("Which value do you need?\n\n");
        printf("Pressure              => 1\n");
        printf("Volume                => 2\n");
        printf("Number of moles       => 3\n");
        printf("Temperature in kelvin => 4\n\n");
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num == 1)
        {
                printf("Enter the value of the volume: ");
                scanf("%f", &v);
                printf("Enter the value of the number of moles: ");
                scanf("%f", &n);
                printf("Enter the value of the temperature in kelvin: ");
                scanf("%f", &t);

                p = (n * r * t) / v;

                printf("The pressure is (%.3f) pascal", p);
        }
        else if (num == 2)
        {
                printf("Enter the value of the pressure: ");
                scanf("%f", &p);
                printf("Enter the value of the number of moles: ");
                scanf("%f", &n);
                printf("Enter the value of the temperature in kelvin: ");
                scanf("%f", &t);

                v = (n * r * t) / p;

                printf("The volume is (%.3f) m³", v);
        }
        else if (num == 3)
        {
                printf("Enter the value of the pressure: ");
                scanf("%f", &p);
                printf("Enter the value of the volume: ");
                scanf("%f", &v);
                printf("Enter the value of the temperature in kelvin: ");
                scanf("%f", &t);

                n = (p * v) / (r * t);

                printf("The number of moles is (%.3f) mol", n);
        }
        else if (num == 4)
        {
                printf("Enter the value of the pressure: ");
                scanf("%f", &p);
                printf("Enter the value of the volume: ");
                scanf("%f", &v);
                printf("Enter the value of the number of moles: ");
                scanf("%f", &n);

                t = (p * v) / (n * r);

                printf("The temperature in kelvin is (%.3f) K", t);
        }
        else
        printf("You entered wrong!");
         

        return 0;
}