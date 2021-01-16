#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t **array, *node, *tmp;
    unsigned long int size, i;

    size = ht->size;
    array = ht->array;
    for (i = 0; i < size; i++)
    {
        node = array[i];
        while (node)
        {
            tmp = node;
            node = node->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }
    free(array);
    free(ht);
}
