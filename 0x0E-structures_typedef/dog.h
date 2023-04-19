#ifndef DOG_H
#define DOG_H


	/**
	 *struct dog - a structure that represents a dog
	 *
	 * @name: first member
	 *
	 * @age: second member
	 *
	 * @owner: third member
	 *
	 * Description:structure represents dog and contains name, age, and owner.
	 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - typedef for structure ofstruct dog dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif
