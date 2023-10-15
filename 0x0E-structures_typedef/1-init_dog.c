#include "dog.h"

/**
 * init_dog - Function that init a struct of type struct dog
 *
 * @d: Struct name
 * @name: Value of first memeber
 * @age: Value of second memeber
 * @owner: Value of third memeber
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
(*d).age = age;
d->owner = owner;
}
}
