#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* structs and pointers to them */

struct Person {
        char *name;
        int age;
        int height;
        int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
        struct Person *who = malloc(sizeof(struct Person));
        assert(who != NULL);

        who->name = strdup(name);
        who->age = age;
        who->height = height;
        who->weight = weight;

        return who;
}

void Person_destroy(struct Person *who)
{
        assert(who != NULL);

        free(who->name);
        free(who);
}

void Person_print(struct Person *who)
{
        printf("Name: %s\n", who->name);
        printf("\tAge: %d\n", who->age);
        printf("\tHeight: %d\n", who->height);
        printf("\tWeight: %d\n", who->weight);
}

int main (int argc, char *argv[])
{
        // make 2 people structures
        struct Person *daniel = Person_create(
                "Daniel Romero", 30, 180, 74);

        struct Person *mychelle = Person_create(
                "Mychelle Romero", 33, 160, 53);

        // print them out and where they are in memory
        printf("Daniel is at memory location %p:\n", daniel);
        Person_print(daniel);

        printf("Mychelle is at memory location %p:\n", mychelle);
        Person_print(mychelle);

        // make everyone age 20 years and print them again
        daniel->age += 20;
        daniel->height -= 2;
        daniel->weight += 40;
        Person_print(daniel);

        mychelle->age += 20;
        mychelle->height -= 2;
        mychelle->weight += 40;
        Person_print(mychelle);

        // destroy them both so we clean up
        Person_destroy(daniel);
        Person_destroy(mychelle);

        return 0;
}
