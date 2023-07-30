/**#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for a basic dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: data structure for dog
 */
/**struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
*/
#ifndef DOG_H
#define DOG_H
 /**
  * struct dog - documentation for each dog
  * @name: dog name
  * @owner: owners name
  * @age: dogs age
  * Description: takes the details of dogs.
  */
struct dog
{
char *name;
char *owner;
float age;
};
#endif /* DOG_H */
