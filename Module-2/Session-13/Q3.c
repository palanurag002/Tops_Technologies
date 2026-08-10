#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    fprintf(file, "Apna Bana Le\n");
    fprintf(file, "Heeriye\n");

    fclose(file);

    printf("Two songs added successfully!");

    return 0;
}
