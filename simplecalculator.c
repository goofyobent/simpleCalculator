#include <stdio.h>

int main(void)
{
    char add = 'A';
    char subtract = 'S';
    char multiply = 'M';
    char divide = 'D';
    char choice;
    int i1;
    int i2;
    double i3;
    printf("Choose your first integer\n");
    scanf("%i", &i1);
    printf("Choose your second integer\n");
    scanf("%i", &i2);
    printf("Choose to either add (%c), subtract (%c), multiply (%c), or divide (%c).\n", add, subtract, multiply, divide);
    scanf(" %c", &choice);
    switch(choice) {
        case 'A':
        case 'a': {
        printf("Addition Selected\n");
        i3 = (i1 + i2);
        printf("The sum of %i and %i is %f\n", i1, i2, i3);
        break; }
        case 'S':
        case 's': {
        printf("Subtraction Selected\n");
        i3 = (i1 - i2);
        printf("The difference between %i and %i is %f\n", i1, i2, i3);
        break; }
        case 'M':
        case 'm': {
        printf("Multiplication Selected\n");
        i3 = (i1 * i2);
        printf("The product of %i and %i is %f\n", i1, i2, i3);
        break; }
        case 'D':
        case 'd': {
        printf("Division Selected\n");
        if (i2 == 0) {
            printf("Invalid, cannot divide by zero\n");
        }
        else {
            i3 = (double)i1 / i2;
            printf("The quotient of %i divided by %i is %f\n", i1, i2, i3);
        }
        break; }
        default:
        printf("Invalid Input\n");
    }
    }