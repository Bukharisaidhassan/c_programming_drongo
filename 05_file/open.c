// c program to open a file
// write in it, And close the file

#include <stdio.h>
#include <string.h>

int main()
{
    // Declear the file pointer
    FILE *filepointer;

    // Get the date to be written in the file
    char dataToBewritten[50] = "Drongo collage of tecnology and innovatation\n";

    // open the existing file usin fopen()
    // in write mode using "w" attribute
    filepointer = fopen("drongo.c", "w");

    // check if this filepointer is NULL
    // which maybe if the file doesn't exist
    if (filepointer == NULL)
    {
        printf("DRONGO.C FILE FAILED TO OPEN.");
    }
    else
    {
        printf("The file is now open.\n");
        // write the dataToBeWritten into the file
        if (strlen(dataToBewritten) > 0)
        {
            // writing in the file using fputs()
            fputs(dataToBewritten, filepointer);
            fprintf(filepointer, "Adding another Input \n");
            fputs("\n", filepointer);
        }
        //  closing the file using fclosing()
        fclose(filepointer);

        printf("Data successfuly written in the file drongo.c\n");
        printf("The file is now closed.");
    }
    return 0;
}