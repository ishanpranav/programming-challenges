/* uva100.c */
/* Copyright (c) 2025 Ishan Pranav */
/* Licensed under the MIT license. */

/* UVA 100: The 3n + 1 Problem */

#include <stdio.h>

static unsigned long algorithm(unsigned long n)
{
    unsigned long cycleLength = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }

        cycleLength++;
    }

    return cycleLength;
}

static unsigned long solution(unsigned long i, unsigned long j)
{
    unsigned long maxCycleLength = 0;

    if (i > j)
    {
        unsigned long k = i;

        i = j;
        j = k;
    }

    for (; i <= j; i++)
    {
        unsigned long cycleLength = algorithm(i);

        if (cycleLength > maxCycleLength)
        {
            maxCycleLength = cycleLength;
        }
    }

    return maxCycleLength;
}

int main()
{
    unsigned long i;
    unsigned long j;

    while (scanf("%lu %lu", &i, &j) == 2)
    {
        printf("%lu %lu %lu\n", i, j, solution(i, j));
    }

    return 0;
}
