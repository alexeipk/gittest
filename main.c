#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arc, char* argv[])
{
    int    id;
    int    n;
    int    i;

    id = fork();
    if (id == 0)
    {
        n = 1;
    }
    else
    {
        n = 6;
    }
    for (i = n; i < n + 5; i++){
        printf("%d ", i);
        fflush(stdout);
    }
    printf("\n");

    return 0;
}