#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int main(){
    char c;
    char may;
    read(STDIN_FILENO,&c,1);
    may = toupper(c);
    write(STDIN_FILENO,&may,1);
    return 0;
}