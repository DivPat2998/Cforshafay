#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int
main ()
{

    int rolls;

    int faces;

    int DiceRoll;

    printf ("Please enter number of rolls:");

    scanf ("%d", &rolls);

    printf ("Please enter number of faces:");

    scanf ("%d", &faces);

    int array1[rolls];

    float array2[rolls];

    if (1 < rolls < 500 && 1 < faces < 25)
    {

        for (int i = 0; i < rolls; i++)
        {

            DiceRoll = (rand () % faces) + 1;

            array1[i] = DiceRoll;

            printf ("%d \n", DiceRoll);

        }

        for (int j = 0; j < faces; j++)
        {

            array2[j] = (array1[j] / rolls) * 100;

            printf ("Number of occurences:%f \n", array2[j]);

        }
    }
    else
    {
        printf ("Please choose the right parameters");
    }

    return 0;

}
