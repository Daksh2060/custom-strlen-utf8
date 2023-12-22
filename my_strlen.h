#ifndef MY_STRLEN_H
#define MY_STRLEN_H

#include <stdint.h>

/*
 Custom implementation of strlen() that handles UTF-8 encoded strings.
 This function calculates the length of the given null-terminated string
 while considering UTF-8 encoding and skipping continuation bytes.
*/
uint64_t my_strlen(char *s);

#endif
