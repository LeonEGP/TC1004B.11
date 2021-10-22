#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int main() {
    char c;
    char U;
    int n;

    do {
        n = read(STDIN_FILENO,&c,1);
        U = toupper(c);
        write(STDOUT_FILENO,&U,1);
    } while( n != 0);

    return 0;
}