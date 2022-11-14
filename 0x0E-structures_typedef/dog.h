#ifndef DOG_H
#define DOG_H

/**
  * struct dog - creates a struct for dog's information
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  *Description: Long descriotion
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog2;
dog2 *new_dog(char *name, float age, char *owner);
void free_dog(dog2 *d);

#endif
