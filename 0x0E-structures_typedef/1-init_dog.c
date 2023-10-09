#include "dog.h"
/**
 * init_dog - function that initialize a variable
 * of type struct dog
 * @d: god struct pointer
 * @name: element of dog
 * @age: age of dog as element
 * @owner: elemnt of dog as owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
