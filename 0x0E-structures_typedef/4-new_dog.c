#include "dog.h"

/**
 * _strlen - Function compute string length
 *
 * @s: String to get its length
 *
 * Return: Length (Integer)
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * _strcpy - Function that copies a string into another
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to char
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Function that create a new struct of type dog_t
 *
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 *
 * Return: Pointer to struct of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;
int nlen = 0, olen = 0;

n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
return (NULL);

if (name != NULL && owner != NULL)
{
nlen = _strlen(name);
olen = _strlen(owner);

n_dog->name = malloc((nlen + 1) * sizeof(char));
if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->owner = malloc((olen + 1) * sizeof(char));
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
n_dog->name = _strcpy(n_dog->name, name);
n_dog->age = age;
n_dog->owner = _strcpy(n_dog->owner, owner);
}
return (n_dog);
}
