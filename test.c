#include <stdio.h>
#include "my_strlen.h"

// Number of strings in the test array
unsigned string_count = 5;

// Array of strings to be tested, including regular and UTF-8 encoded strings
char *strings[] = {
    "Hello World",
    "gar\xc3\xa7on",
    "\xc3\xa9",
    "\xe8\xb0\xa2\xe8\xb0\xa2\xe2\x80\xa6 \xe0\xb8\x82\xe0\xb8\xad\xe0\xb8\x9a\xe0\xb8\x84\xe0\xb8\xb8\xe0\xb8\x93\xe2\x80\xa6 \xe0\xa4\xa7\xe0\xa4\xa8\xe0\xa5\x8d\xe0\xa4\xaf\xe0\xa4\xb5\xe0\xa4\xbe\xe0\xa4\xa6\xe2\x80\xa6 \xea\xb0\x90\xec\x82\xac\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4",
    "Hello \xf0\x9f\x98\x83"};

int main()
{
    // Loop through each string in the array and test my_strlen function
    for (unsigned i = 0; i < string_count; i++)
    {
        char *s = strings[i];

        // Print the result of my_strlen for each string
        printf("my_strlen(\"%s\") == %ld\n", s, my_strlen(s));
    }

    // Return 0 to indicate successful execution
    return 0;
}
