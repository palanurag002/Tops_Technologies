#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    if (file == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while (fgets(song, 100, file) != NULL)
    {
        if (strstr(song, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
