#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    int numcases,i;
    scanf("%d", &numcases);
    int raduis[numcases]; //here we make an array of name radius with number of places = number of cases to store multiple numbers of radius.
    double part[numcases],ropelen[numcases]; //here we make two arrayes of name part and ropelen with number of places = number of cases to store multiple numbers of part and ropelen.
    printf("\n");
    for(i=0; i<numcases; i++)
    {
        scanf("%d %lf", &raduis[i], &part[i]); //Taking radius and part from the user.
        if ( (raduis[i] >= 1 && raduis[i] <= 1000) && (part[i] >= 0.0 && part[i] <= 0.5) ) //Checking if the user input is in the range of radius and part
            ropelen[i] = 2 * PI * raduis[i] * part[i]; //Calculate the rope length.
        else // The user entered an incorrect radius or part.
        {
            printf("Please enter a correct form (raduis >= 1 and raduis <= 1000 and part >= 0.0 and part <= 0.5) :\n");
            scanf("%d %lf", &raduis[i], &part[i]);
            ropelen[i] = 2 * PI * raduis[i] * part[i];
        }
        printf("\n");
    }
    for(i=0; i<numcases; i++)
    {
        printf("R = %d, P = %.2lf, Rope = %.2lf", raduis[i], part[i], ropelen[i]);
        if (i <numcases-1 )
            printf("\n\n");
    }
    return 0;
}
