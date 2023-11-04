#include "hash_tables.h"
/**
 * key_index - Finds the right index to stre the kye
 * @key: The key
 * @size: Size of the hash table
 * Return: The index to store value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
