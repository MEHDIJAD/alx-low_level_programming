#include <stdlib.h>
#include <stdio.h>

struct user
{
	char *name;
	char *email;
	int  age;
};

struct user *new_user(char *name, char *email, int age)
{
	struct user *user = malloc(sizeof(struct user));
	if (!user)
		return (NULL);
	user->name = name;
	user->email = email;
	user->age = age;

	return (user);
}

int main(void)
{
	struct user *user;

	user = new_user("FOO", "foo@foo.com", 98);
	if (user == NULL)
		return(1);
	printf("User: %s\nEmail:%s\nAge:%d\n", user->name, user->email, user->age); 
	return (0);
}
