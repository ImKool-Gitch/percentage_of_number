#include <stdio.h>

void main()
{
    printf("Made by ImKool-Gitch\n");
    int percentage, number;
    printf("Enter percentage and a number: ");
    scanf("%d %d", &percentage, &number);
    int result = (percentage * number) / 100;
    printf("%d percent of %d is: %d", percentage, number, result);
}
