#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * @n: number of char taken from @s2
 * Return: pointer to the new allocated memory that contains s1 and n of s2
 */
void *_calloc(unsigned int nmemb, unsigned int size)
