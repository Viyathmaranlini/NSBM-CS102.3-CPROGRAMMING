#include <stdio.h>
int main()
{
    float d_trav, time, avg_speed; // decalring the variable
    // intput
    printf("Enter Distance in meter = \n");
    scanf("%f", &d_trav);
    printf("Time Taken in second =\n");
    scanf("%f", &time);
    // process
    avg_speed = (d_trav / time);
    // output
    printf("Avg speed is %.2f 1/ms \n", avg_speed);
}