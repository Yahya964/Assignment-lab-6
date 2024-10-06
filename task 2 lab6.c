#include <stdio.h>

int main() {
    int x, y, sum;
    sum=0;

  
    printf("Enter x value: ");
    scanf("%d", &x);
    printf("Enter y value: ");
    scanf("%d", &y);


    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) { 
            sum += i; 
        }
    }

   
    printf("Sum of even numbers between %d and %d = %d\n", x, y, sum);

return 0;
}