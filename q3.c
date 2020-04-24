#include <stdio.h>

// Space complexity O(n)
// Time complexity O(n)

int main(int argc, char* argv[])
{
    int i, j, sizeA, sizeB, flag = 0;
    // go to the end of each string
    for(i = 0; argv[1][i] != '\0'; i++);
    sizeA = i; i--;
    for(j = 0; argv[2][j] != '\0'; j++);
    sizeB = j; j--;
    // more than one character added or removed, not typo
    if(sizeA - sizeB > 1 || sizeA - sizeB < -1)
    {
        printf("false\n");
        return 0;
    }
    
    // based on first word, check the characters on second word
    for(; i >= 0; i--){
        if(argv[1][i] != argv[2][j]){
            if(flag){ // more than one character changed, not typo
                printf("false\n");
                return 0; 
            }
            else{
                flag = 1; // at least one character changed
                if(sizeA - sizeB == 1) 
                    j++; //a charcter was removed so we check the same character of second word again against character of first word
                if(sizeA - sizeB == -1)
                    i++; //a charcter was added so we check the same character of first word again against character of first word
            }
        }
        j--;
    }
    
    // other scenarios are typos
    printf("true\n");
    return 0;
}
