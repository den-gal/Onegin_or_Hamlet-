// Denis Galanin (327)
// Onegin_or_Hamlet task for special course of SP CMC  
#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <sys/mman.h>
void Sort_the_Poem();
char* Input_Text(FILE* fd);


char* Input_Text(FILE * fd)
{
    if (fd == NULL)
    {
        fprintf(stderr, "ERROR: FILE %s wasn't opened sucssessfuly", poem);
        _exit(1);
    }

}

void Sort_the_Poem()
{
    const char* poem;
    gets(poem);
    FILE* fd = fopen(poem, "r+");

    const char* poem;
    fclose(fd);
}

int main()
{
    printf("Start of execution");
    Sort_the_Poem();
    
    printf("End of execution");
}

