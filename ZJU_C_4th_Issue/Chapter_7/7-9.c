#include <stdio.h>

int main(void)
{
    int a[3];
    int i, thirty_one, thirty, daysum = 0, run = 0;

    // input date
    scanf("%d/%d/%d", &a[0], &a[1], &a[2]);

    // calculate the number of months with 31 days
    if (a[1] < 8 && a[1] != 2)
        thirty_one = (a[1] - 1) / 2;
    else if (a[1] == 2)
        thirty_one = 1;
    else
        thirty_one = a[1] / 2;

    // calculate the nuber of months with 30 days
    thirty = a[1] - thirty_one - 1;

    // calculate daysum without considering Feb
    daysum = thirty * 30 + thirty_one * 31 + a[2];

    // consider Feb
    // whether the year is a "run" year
    if (a[0] % 400 == 0 || (a[0] % 4 == 0 && a[0] % 100 != 0))
        run = 1;
    // cutting out the days of Feb
    if (run == 1 && a[1] > 2)
        daysum -= 1;
    if (run == 0 && a[1] > 2)
        daysum -= 2;

    // output
    printf("%d", daysum);
    return 0;
}