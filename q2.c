#include <stdio.h>

// Space complexity O(n)
// Time complexity O(n)

int main(int argc, char* argv[])
{
    int i = 0, a[25] = {0}, b[25] = {0}, aux = 0;
    // check if words have the same characters
    for(i = 0; argv[1][i] != '\0'; i++)
        a[argv[1][i] - 'a']++;
    for(i = 0; argv[2][i] != '\0'; i++)
        b[argv[2][i] - 'a']++;
    for(i = 0; i < 25; i++)
        if(a[i] != b[i]){
            // words don't have the same number of a given character
            printf("false\n");
            return 0;
        }
    // first character isn't the same
    if(argv[1][0] != argv[1][0]){
        printf("false\n");
        return 0;
    }
    // check if more than 2/3 of the characters are in different positions
    for(i = 1; argv[1][i] != '\0'; i++){
        if(argv[1][i] != argv[2][i])
            aux++;
    }
    if(aux > (float)i*(2.0/3.0))
        printf("false\n");
    else printf("true\n");
    
    return 0;
}
