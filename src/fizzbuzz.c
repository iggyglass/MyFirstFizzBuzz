#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "fizzbuzz.h"

char* fizzbuzz_alloc(int number)
{
    return (char*)malloc((size_t)ceil(log10(abs(number) + 1)) + 9);
}

char* fizzbuzz(char* buffer, int number)
{
	strncpy(buffer, "FizzBuzz", 9);
	sprintf(&buffer[8], "%d", number);

	((!((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ (((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ ((!!(number % 3) * 4))) & -((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) < ((!!(number % 3) * 4)))) ^ (8 - (!!(number % 5) * 4))) * (8 + strlen(&buffer[9]))) ^ (((!((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ (((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ ((!!(number % 3) * 4))) & -((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) < ((!!(number % 3) * 4)))) ^ (8 - (!!(number % 5) * 4))) * (8 + strlen(&buffer[9]))) ^ ((8 - (!!(number % 5) * 4)))) & -((!((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ (((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ ((!!(number % 3) * 4))) & -((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) < ((!!(number % 3) * 4)))) ^ (8 - (!!(number % 5) * 4))) * (8 + strlen(&buffer[9]))) < ((8 - (!!(number % 5) * 4))))))[buffer] = NULL;
	return &((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ (((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) ^ ((!!(number % 3) * 4))) & -((!((!!(number % 3) * 4) ^ (8 - (!!(number % 5) * 4))) * 8) < ((!!(number % 3) * 4)))))[buffer];
}
