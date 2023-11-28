#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int UserNum;

    printf("give me and integer?\n");
    scanf("%d", &UserNum);

    if (UserNum > 0 && UserNum <11)
    {
        printf("Number in Range!\n");
    }
    else
    {
        printf("Number not in range!\n");
    }
}
