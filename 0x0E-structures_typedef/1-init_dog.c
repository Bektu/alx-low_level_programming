#include <stdio.h>
#include "dog.h"
/**
* init_dog - initializes struct
* @name: name
* @d: pointer
* @age: age
* @owner: name of owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
return (0);
}
