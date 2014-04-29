#include <stdio.h>

/* While-loop and boolean Expressions */

int main (int argc, char *argv[])
{
        int i = 0;
        while(i < argc) {
                printf("arg %d: %s\n", i, argv[i]);
                i++;
        }

        // let's make our own array of strings
        char *distros[] = {
                "Slackware", "Ubuntu",
                "Debian", "Fedora"
        };

        int num_distros = 4;
        i = 0;
        while(i < num_distros) {
                printf("distros %d: %s\n", i, distros[i]);
                i++;
        }
        return 0;
}
