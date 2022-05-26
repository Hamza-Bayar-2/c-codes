#include <stdio.h>
#include <math.h>

int main(void)
{       
        float h, g, t, vi, vl; // vi => initial velocity  vl => latest velocity
        int choose;

        printf("Does the object have an initial velocity towards the ground?\n(Yes => 1, No => 2)\n(1 or 2): ");
        scanf("%d", &choose);

        if (choose == 1)
        {
                printf("Please enter the initial velocity of the object (m/s): ");
                scanf("%f", &vi);

                printf("Please enter the height of the object from the ground (m): ");
                scanf("%f", &h);

                printf("Please enter the gravity (N/kg): ");
                scanf("%f", &g);

                vl = sqrt(pow(vi, 2) + (2 * g * h));
                t = (vl - vi) / g;

                printf("Falling time is (%.3f) s\n", t);
                printf("Latest velocity is (%.3f) m/s\n", vl);
                
        }
        else if (choose == 2)
        {
                printf("Please enter the height of the object from the ground (m): ");
                scanf("%f", &h);

                printf("Please enter the gravity (N/kg): ");
                scanf("%f", &g);

                t = sqrt((2 * h) / g);
                vl = g * t;
        
                printf("Falling time is (%.3f) s\n", t);
                printf("Latest velocity is (%.3f) m/s", vl);
        }
        
        return 0;
}
