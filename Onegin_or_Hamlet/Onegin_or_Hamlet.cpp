// Denis Galanin (327)
// Onegin_or_Hamlet task for special course of SP CMC  

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/un.h>
#include <sys/io.h>
#include <unistd.h>
#include <assert.h>

void Sort_the_Poem();
char* Input_Text(int* fd);

char* Input_Text(int *fd)
{
    char* novel = NULL;
    if (*fd == -1)
    {
        fprintf(stderr, "ERROR: FILE wasn't opened sucssessfuly");
        exit(1);
    }
    struct stat statistics;
    if(fstat( *fd, &statistics) != -1)
    {
        int len = statistics.st_size;
        novel = (char*)mmap(0, len, PROT_READ | PROT_WRITE, MAP_PRIVATE,*fd,0);
    }
    else
    {
        fprintf(stderr, "ERROR: FILE len is incorrect");
        exit(1);
    }
    return novel;
}

void Sort_the_Poem()
{
    char* poem;
    fgets(poem, 1000, stdin);
    int fd = open(poem, O_RDWR);
    char * novel = Input_Text(&fd);


    close(fd);
}

int main()
{
    printf("Start of execution");
    Sort_the_Poem();
    
    printf("End of execution");
}

