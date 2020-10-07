// Denis Galanin (327)
// Onegin_or_Hamlet task for special course of SP CMC  
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <stdlib.h>
void Sort_the_Poem();
char* Input_Text(FILE* fd);


char* Input_Text(int *fd)
{
    char* novel = NULL;
    if (fd == NULL)
    {
        fprintf(stderr, "ERROR: FILE wasn't opened sucssessfuly");
        _exit(1);
    }
    struct stat statistics;
    if(fstat( *fd, &statistics) != -1)
    {
        int len = statistics.st_size;
        //novel = mmap(0, len, PROT_READ | PROT_WRITE, MAP_PRIVATE,fd);
    }
    else
    {
        fprintf(stderr, "ERROR: FILE len is incorrect");
        _exit(1);
    }
    return novel;
}

void Sort_the_Poem()
{
    const char* poem;
    int fd = open(poem, "r+");

    //while (!feof(fd))
    //{
    //   fgets(str, 1000, fd);
    //}
    close(fd);
}

int main()
{
    printf("Start of execution");
    Sort_the_Poem();
    
    printf("End of execution");
}

