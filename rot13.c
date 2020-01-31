#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define rot13(word)                                                                 \
{                                                                                   \
    size_t i = strlen(word);                                                        \
    while (i--) {                                                                   \
        char c = word[i];                                                           \
        if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm')) {                     \
            word[i] += '\r';                                                        \
        } else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z')) {              \
            word[i] -= '\r';                                                        \
        }                                                                           \
    }                                                                               \
}                                                                                   \

#ifdef TESTROT13MACRO

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("usage: %s <word>\n", argv[0]);
        return 0;
    }

    char* word = argv[1];
    printf("%s\n", word);
    rot13(word);
    printf("%s\n", word);

    return 0;
}

#endif
