#include <stdio.h>

/**
 * Print Fahrenheit-Celsius table
 */
int main(int argc, char const *argv[])
{
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temperature table
    upper = 300; // upper limit
    step = 20;   // step size

    fahrenheit = lower;

    while (fahrenheit <= upper)
    {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
