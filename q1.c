#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0, aux;
    // go to end of string
    while(argv[1][i] != '\0') i++;
    i--;
    aux = i;
    // look for end of spaces in the end of string
    while(argv[1][i] == ' ') i--;
    
    // search of spaces while transfering other charaters to the position of aux
    for(; i >= 0; i--){
        argv[1][aux] = argv[1][i];
        if(argv[1][i] == ' '){
            // if there is a space, place &32 instead
            argv[1][aux--] = '2';
            argv[1][aux--] = '3';
            argv[1][aux] = '&';
        }
        aux--;
    }
    printf("%s\n", argv[1]);
    return 0;
}
