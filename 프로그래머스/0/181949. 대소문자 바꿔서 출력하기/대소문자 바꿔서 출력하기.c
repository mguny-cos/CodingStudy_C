#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    int a;
    
    for(a=0 ; s1[a] != '\0' ; a++){
        if(s1[a] >= 65 && s1[a] <= 90)
            s1[a] = s1[a] + 32;
        else if(s1[a] >= 97 && s1[a] <= 122)
            s1[a] = s1[a] - 32;
    }
    
    printf("%s", s1);
    
    
    return 0;
}
