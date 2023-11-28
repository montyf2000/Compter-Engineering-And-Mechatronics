#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int UserNum;

    printf("give me and integer?\n");
    scanf("%d", &UserNum);

    if ( UserNum <= 5)
    {
        printf("Still a baby\n");
    }
    else if(UserNum > 5 && UserNum <=12)
    {
        printf("The junior years\n");
    }
    else if(UserNum > 12 && UserNum < 20)
    {
        printf("teenage Years");
    }
    else if( UserNum >= 20)
    {
        printf("Downhill all the way");
    }
}