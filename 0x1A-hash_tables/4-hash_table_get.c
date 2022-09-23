#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: the key
 *Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];
	for (; n != NULL; n = n->next)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
	}
	return (NULL);
}
