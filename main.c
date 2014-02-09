#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *inFile;
    
    char string[16];
    
    if (argc != 2)
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
        fprintf(stderr, "Error: File Could Not Be Opened\n");
        exit(1);
    }
    
    while (fgets(string, 16, inFile) != NULL)
    {
        printf("%s", string);
    }
    
    fclose(inFile);
}

 