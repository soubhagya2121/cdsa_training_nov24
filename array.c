#include <stdio.h>
#include <stdlib.h>

int main(int argcount, char *args[]) {
    if (argcount < 3) {
        printf("Usage: %s <number_to_search> <array_elements>\n", args[0]);
        return 1;
    }

    int search = atoi(args[1]);  
    int count = 0;

    for (int i = 2; i < argcount; i++) {
        if (atoi(args[i]) == search) {
            count++;
        }
    }

    printf("The frequency of %d is: %d\n", search, count);

    return 0;
}

--------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>

int main()
{
    char source= "hello, world!";
    char destination[50];

    strcpy(destination, source);

    print("source : %s\n", source);
    printf("destination : %s\n", destination);

    return 0;
}
