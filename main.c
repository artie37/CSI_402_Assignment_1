#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *inFile;
    FILE *outFile;
    
    char string[16];
    
    if (argc != 3)
    /*
     * Check to see if the user entered the correct amount of 
     * command line arguments were entered. If not, print
     * error message and close programming.
     */
    {
        fprintf(stderr, "Error: Incorrect Number Of Arguments\n");
        exit(1);
    }
    
    if ((inFile = fopen(argv[1], "r")) == NULL)
    /*
     * Check to see if the file opened. If not, print 
     * error message and close program.
     */
    {
        fprintf(stderr, "Error: File for reading could not be opened\n");
        exit(1);
    }
    
    if ((outFile = fopen(argv[2], "w")) == NULL)
    /*
     * Check to see if the file opened. If not, print
     * error message and close program.
     */
    {
        fprintf(stderr, "Error: File for writing could not be opened\n");
        exit(1);
    }
    
    while (fgets(string, 16, inFile) != NULL)
    {
        fprintf(outFile, "%s", string);
    }
    
    fclose(inFile);
}

 