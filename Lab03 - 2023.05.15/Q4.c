#include <stdio.h>
int main()
{
    float deg_fah, deg_cel; // declaring the variable

    // get user input
    printf("Enter the Degrees Fahrenheit = \n");
    scanf("%f", &deg_fah);
    // process
    deg_cel = ((deg_fah - 32) * 5) / 9;
    // output
    printf("Degrees Celsius is %.2f \n", deg_cel);

    return 0;
}