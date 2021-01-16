#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht:
 * @key:
 * @value:
 * 
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i;
    hash_node_t *new;

    if (key == NULL || ht == NULL)
        return (0);
    i = key_index((const unsigned char *)key, ht->size);

    if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
    {
        ht->array[i]->value = strdup(value);
        return (1);
    }
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
        return (0);
    new->key = strdup(key);
    new->value = strdup(value);
    new->next = ht->array[i];
    ht->array[i] = new;
    return(1);


}

