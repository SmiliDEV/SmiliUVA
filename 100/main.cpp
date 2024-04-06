/*
 *  Authors:
 *  Márcio Milisse   nº 61799
 *  Afonso Henriques nº 61826
 */
 
#include<iostream>
#include<stdio.h>

int algorithm(int n)
{
    return ( n == 1 ? 0 : algorithm( n % 2 == 0 ? n / 2 : 3 * n + 1)) + 1;
}

int maxCycleLength(int i, int j)
{
    int max = 1;
    int cycleLength;
    int k;
    if (i > j) {
        k = i;
        i = j;
        j = k;
    }
    for (; i <= j; i++)
    {
        cycleLength = algorithm(i);
        max = cycleLength >= max ? cycleLength : max;
    }
    return max;
}

int main(int argc, char* argv[])
{   
    int i, j;
    while (scanf("%d %d", &i, &j) == 2)
        std::cout << i << " " << j << " " << maxCycleLength(i, j) << std::endl;

    return 0;
}