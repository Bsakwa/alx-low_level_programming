#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 *
 * Return: The hashtable or nothing if ht is NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j = 0;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node != NULL)
		{
			if (comma_flag)
				printf(", ");
			printf("\'%s':\'%s'", node->key, node->value);
			comma_flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
