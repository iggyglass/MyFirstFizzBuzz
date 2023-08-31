#include <stdio.h>
#include <stdlib.h>

#include "fizzbuzz.h"

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    printf("FizzBuzz! :D\n\n");

    while (1)
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        char* buffer = fizzbuzz_alloc(number);

        printf("%s\n", fizzbuzz(buffer, number));
        free(buffer);
    }

    return 0;
}
