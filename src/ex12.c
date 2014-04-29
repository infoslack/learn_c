#include <stdio.h>

/* if, else if, else
 *
 * Run:
 * make ex12
 * ./ex12 asdf asdf
 *
 * */

int main (int argc, char *argv[])
{
        int i = 0;

        if(argc == 1) {
                printf("You only have one argument. You suck.\n");
        } else if(argc > 1 && argc < 4) {
                printf("Here's your arguments:\n");

                for(i = 0; i < argc; i++) {
                        printf("%s ", argv[i]);
                }
                printf("\n");
        } else {
                printf("You have too many arguments. You suck!\n");
        }

        return 0;
}
