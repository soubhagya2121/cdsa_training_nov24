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
-------------------------------------------------------------------

include <stdio.h>
#include <string.h>

int main(int argcount, char *args[]) {
    if (argc < 3) {
        printf("Usage: %s\n", args[0]);
        return 1;
    }

    char search_char = args[1][0];

    printf("Searching character '%s' in each provided string:\n", search_char);

    for (int i = 2; i < argcount; i++) {
        char *result = strchr(args[i], search_char);

        if (result != '\0') {
            printf("character %s to be found is the strin %s is found at position %ld\n", search_char, args[i], result - args[i]);
        } else {
            printf("character %s is not found in the string %s\n", search_char, argv[i]);
        }
    }
    return 0;
}       