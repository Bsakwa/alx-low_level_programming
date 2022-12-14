# 0x1A. C - Hash tables

In the course of this project, I learnt implementing hash functions and hast tables in C Programming.

## Tests:heavy_check_mark:

* [tests](./tests): Test files provided by ALX x Holberton.

## Header file

* [hash_tables.h](./hash_tables.h): File containing all function definitions and prototypes for the project

Data Structures:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
Function Prototypes:
| File | Prototype |
| --- | --- |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);` |
| | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` |
| | `char *shash_table_get(const shash_table_t *ht, const char *key);` |
| | `void shash_table_print(const shash_table_t *ht);` |
| | `void shash_table_print_rev(const shash_table_t *ht);` |
| | `void shash_table_delete(shash_table_t *ht);` |

## Tasks
* **0. >>> ht = {}**
	* [0-hash_table_create.c](./0-hash_table_create.c): C function that creates a `hash_table_t`
  hash table.
    * If the function fails - returns `NULL`.
    * Otherwise - returns a pointer to the new hash table.
* **1. djb2**
	* [1-djb2.c](./1-djb2.c): Implementing the djb2 algorithm
* **2. key -> index**
    * [2-key_index.c](./2-key_index.c): Return the index of a key
* **3. >>>ht['betty'] = 'cool'**
	* [3-hash_table_set.c](./3-hash_table_set.c): Adds an element to the hash table
	* Returns 1 if succeeds, 0 otherwise
	* In case of a collision add new node at the beginning
* **4. >>>ht['betty']**
	* [4-hash_table_get.c](./4-hash_table_get.c): Retrieves a value associated with a key
	* Returns the value associated with the element or NULL
* **5. >>> print(ht)**
	* [5-hash_table_print.c](./5-hash_table_print.c): Prints a hash table
* **6. >>> del ht**
	* [6-hash_table_delete.c](./6-hash_table_delete.c): Delete a hash Table 
