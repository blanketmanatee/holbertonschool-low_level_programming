#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated w k
 * @ht:
 * @key:
 * 
 * Return: value associated with element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int idx;
    hash_node_t *node;

    if (!ht || !key || !*key)
        return (NULL);
    idx = key_index((const unsigned char *)key, ht->size);
    node = ht->array[idx];

    while(node)
    {
        if (strcmp(node->key, key) == 0)
        {
            return(node->value);
        }
        node = node->next;
    }
    return (NULL);
}
