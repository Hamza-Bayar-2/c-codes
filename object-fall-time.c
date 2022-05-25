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
                printf("Please enter the initial velocity of the object: ");
                scanf("%f", &vi);

                printf("Please enter the height of the object from the ground: ");
                scanf("%f", &h);

                printf("Please enter the gravity: ");
                scanf("%f", &g);

                vl = sqrt(pow(vi, 2) + (2 * g * h));
                t = (vl - vi) / g;

                printf("Falling time is (%.3f) s\n", t);
                printf("Latest velocity is (%.3f) v\n", vl);
                
        }
        else if (choose == 2)
        {
                printf("Please enter the height of the object from the ground: ");
                scanf("%f", &h);

                printf("Please enter the gravity: ");
                scanf("%f", &g);

                t = sqrt((2 * h) / g);
                vl = g * t;
        
                printf("Falling time is (%.3f) s\n", t);
                printf("Latest velocity is (%.3f) v", vl);
        }
        
        return 0;
}