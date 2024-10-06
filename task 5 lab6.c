#include <stdio.h>

int main()
{
	int number;
	int Prime = 1;
	int i;
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

			return 0;
}