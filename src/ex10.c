#include <stdio.h>

/* Arrays Of Strings, looping
 * Run this program:
 *
 * $ make ex10
 * $ ./ex10 this are many arguments
 * $ ./ex10
 * */

int main (int argc, char *argv[])
{
        int i = 0;

        // go through each string in argv
        // why am I skipping argv[0] ?
        for (i = 1; i < argc; i++) {
                printf("arg %d: %s\n", i, argv[i]);
        }

        // let's make our own array of strings
        char *distros[] = {
                "Slackware", "Ubuntu",
                "Debian", "Fedora"
        };

        int num_distros = 4;
        for (i = 0; i < num_distros; i++) {
                printf("distros %d: %s\n", i, distros[i]);
        }

        return 0;
}
