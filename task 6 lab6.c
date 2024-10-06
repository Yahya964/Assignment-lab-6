#include <stdio.h>

int main()
{
	int number;
	int Prime = 1;
	int i;
	int a=0, b=1, next;
	printf("Enter a number: ");
	scanf("%d",&number);
	for (i = 2; i*i <= number; i++)
	{
		if(number%i==0) 
		{
			Prime = 0;
		}
	}
			if(Prime) 
			{
				printf("The number %d is prime\n", number);
			}
			else {
				printf ("The number %d is not prime\n", number);
			}
			 printf("Fibonacci Series: %d %d",a,b);
        next = a + b;
        while (next <= number) 
        {
        printf(" %d", next);
        a = b;
        b = next;
        next = a + b;
        }
        printf("\n");

			return 0;
}