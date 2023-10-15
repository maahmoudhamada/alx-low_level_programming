#include "dog.h"

/**
 * free_dog - Function that free a struct
 *
 * @d: Struct to be freed
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
