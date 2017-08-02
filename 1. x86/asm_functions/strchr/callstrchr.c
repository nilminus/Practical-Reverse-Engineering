#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strchr(const char* s, int c);

int main(int argc, char **argv){
    if (argc < 2)
        exit(0);
    char c = (char)argv[2][0];

    //printf("Looking for character %c in %s\n", c, argv[1]); 
    //char *result = strchr(argv[1], c);
    //printf("Here is your pointer to the char: %p\n", result);
    //printf("Here is the resulting string: %s\n", result);

    printf("Looking for character %c in %s\n", c, argv[1]);
    char *result2 = my_strchr(argv[1], c);
    printf("Here is your pointer to the char: %p\n", result2);
    printf("Here is the resulting string: %s\n", result2);

    return 0;
}
