//
//  main.c
//  population
//
//  Created by Alexander Ryakhin on 12/5/21.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach threshold
    int counter = 0;
    if (startSize != endSize)
    {
        do
        {
            int increase = startSize / 3;
            int decrease = startSize / 4;
            startSize = startSize + increase - decrease;
            counter += 1;
        }
        while (startSize < endSize);
    }

    // Print number of years
    printf("Years: %i\n", counter);
}
