#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[300];

    printf("Please write a string: \n");
    gets(text);

    printf("Your sentence in reverse:\n");

    printf("%s",strrev(text));




    return 0;
}
