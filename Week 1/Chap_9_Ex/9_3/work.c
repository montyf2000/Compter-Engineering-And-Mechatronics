#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[50];
    int age = 1;  			// Declare variable and initialise to 1
    printf ("\nPlease enter your name?\n");
    scanf("%s", &name);


    while ( age != 0)	    // Loop as long as age is not zero
    {
        // Code in {} executed if condition is true (non-zero)
        printf ("You are %s \n", name);    

        // Code  now goes back and repeats the test with the value of age just entered
    }
    return 0;	// Exit code
}