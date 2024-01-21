#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Creates random character
char randchar(){
    //rand() recognizes ASCII, generates specific number in ASCII range
    //(char) typecasts turning random integer into its assigned char
    return ((char) ('a' + rand() % 26));
}
