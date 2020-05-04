#include "stdio.h"

int main(int argc, char **argv){
    puts("Hello World");
    if (argc==2)
    {
        puts(argv[1]);
    }
    
    return 0;
}