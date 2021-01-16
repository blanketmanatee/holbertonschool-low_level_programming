#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gives index of key
 * @key:
 * @size:
 * 
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
