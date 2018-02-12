#include <stdio.h>

int main ()
{
    int number;
    printf ("Enter an integer more than zero: ");
    scanf ("%d", &number);

    if (number < 1) return (1) ;

    printf ("%d is an %s number. \n", number,
            (number%2)> 0 ? "odd" : "even");

    return (0);











}
