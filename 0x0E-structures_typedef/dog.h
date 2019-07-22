#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: insformation about the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog_t;
typedef struct dog_t my_dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
