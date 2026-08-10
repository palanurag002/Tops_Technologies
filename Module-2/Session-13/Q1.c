#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Kesariya\n");
    fprintf(file, "Chaleya\n");

    fclose(file);

    printf("Songs saved successfully!");

    return 0;
}
