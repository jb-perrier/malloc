//
// Created by Jean-baptiste Perrier on 11/30/22.
//

#include "malloc.h"
#include <stdio.h>

int main(int argc, char** argv)
{
    char* ptr = malloc(2);

    // out of bound
    ptr[2] = 0;


    return EXIT_SUCCESS;
}