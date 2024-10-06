#include <stdio.h>

int main()
{
    int streak,i;
    char photo;
   
    streak=0;
   
    for(i=0 ;i<1000;)
    {
        printf("Do you want to send streak(Y/N): ");
        scanf("%c", &photo);
        while((getchar()) != '\n');
        if(photo=='n' || photo=='N')
        {
            break;
            
        }
        else if(photo=='Y' || photo=='y')
        {
        streak = streak+1;
        }
    }
     printf("Your streak  is: %d \n", streak);


return 0;
}
