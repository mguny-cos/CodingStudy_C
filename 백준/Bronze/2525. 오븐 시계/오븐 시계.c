#include <stdio.h>

int main(){
    
    int H, M, T;
    
    scanf("%d %d", &H,&M);
    scanf("%d", &T);
    
    M = M + T;
    
    if(M>=60){
        H = H + (M/60);
        M = M%60; 
    
    }
    if(H>23){
        H = H%24;
         
    }
    
    printf("%d %d\n", H, M);
    
    return 0;
}