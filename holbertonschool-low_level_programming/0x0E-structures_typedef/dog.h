#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct with three members
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct dog a structure with members name age owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
