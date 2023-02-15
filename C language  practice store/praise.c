#include <stdio.h>
#define PRAISE "your are an extraordinary being."

int main()
{
    char name [40];

    printf("what's your name?\n");
    scanf("%s", name);
    printf("hello, %s. %s\n", name, PRAISE);

    return 0;
    
}