
#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;


    printf("Enter the principal amount : ");
    scanf("%f", &principle);

    printf("How long the loan take?  ");
    scanf("%f", &time);

    printf("Whats the rate ");
    scanf("%f", &rate);


    CI = principle* (pow((1 + rate / 100), time));

    printf("The Compond Interest is = %f", CI);

    return 0;
}
