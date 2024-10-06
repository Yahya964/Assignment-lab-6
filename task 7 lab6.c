#include <stdio.h>
int main()
{
    int number,a, remainder_value;
    int result=0;
    printf("Enter three digit number: ");
    scanf("%d", &number);
    a=number;
    while (a != 0) 
    {
        remainder_value = a % 10;             
        result += remainder_value * remainder_value * remainder_value;  
        a /= 10;                        
    }
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
    return 0;
}