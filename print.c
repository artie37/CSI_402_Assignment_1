//
//  print.c
//  Assignment_1
//
//  Created by artie37 on 2/10/14.
//  Copyright (c) 2014 Arthur Knapp. All rights reserved.
//

#include <stdio.h>
#include "string.h"

void print(FILE inFile, FILE outFile)
{
    while (fgets(string, 16, inFile) != NULL)
    {
        fprintf(outFile, "%s", string);
    }
}

