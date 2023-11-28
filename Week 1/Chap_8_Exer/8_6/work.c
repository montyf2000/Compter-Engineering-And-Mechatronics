#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int UserNum;

    printf("give me and integer?\n");
    scanf("%d", &UserNum);

    switch(UserNum)
    {
        case 1 :
        printf("Black\n");
        break;

        case 2:
        printf("Brown\n");
        break;

        case 3:
        printf("orange\n");
        break;

        case 4:
        printf("yellow\n");
        break;
    }

}

