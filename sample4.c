#include <stdio.h>
int main(){
    int r,c;
    for(c = 1; c<=4; c++)
    {
        for(r=1; r<=c; r++)
        {
            printf("*\t ");
        }
        printf("\n");
    }
}