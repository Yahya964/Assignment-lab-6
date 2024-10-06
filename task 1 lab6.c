#include <stdio.h>

int main()
{
    int i, sum;
    sum=0;
    printf("Enter value(if 0 entered program stops): ");
    scanf("%d", &i);
    while (i !=0)
    {
        sum=sum+i;
        i=sum;
        printf("Your sum is: %d\n",i);
        printf("Enter value(if 0 entered program stops): ");
        scanf("%d", &i);
    } printf("Program Stopped");
 


    return 0;
}