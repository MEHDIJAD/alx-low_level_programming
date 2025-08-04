#include "dog.h"

void print_dog(struct dog *d)
{
	if (!d)
		return ;
	if (!d->name)
		printf("(nil)\n");
	if (!d->owner)
		printf("(nil)\n");
	if (!d->age)
		printf("(nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n",
		d->name, d->age, d->owner);
}
