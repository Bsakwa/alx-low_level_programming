#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure of type dog
 * @name: The dogs name.
 * @age: The dogs age.
 * @owner: The owner of the dog;
 *
 * Description: Struct Dog displays name of a dog, its age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
