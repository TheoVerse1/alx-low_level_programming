#include "hash_tables.h"

/* 
 * key_index - Computes the index for a given key in a hash table.
 * @key: The key to hash.
 * @size: The size of the hash table array.
 *
 * Description:
 * This function calculates the index at which the key/value pair should be stored
 * in the hash table array using the hash_djb2 function.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the hash_djb2 function. */
	hash_value = hash_djb2(key);

	/* Calculate the index as the hash value modulo the size of the array. */
	return (hash_value % size);
}
