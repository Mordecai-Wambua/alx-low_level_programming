#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: pointer to actual key
 * @size: size of the array in hash table
 *
 * Return: correct index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int output;

	output = hash_djb2(key) % size;

	return (output);
}
