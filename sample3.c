#include <stdio.h>
int main(){
    int r,c;
    for(c=4; c<=1; c--)
    {
        for(r=4; r<=c; r--)
        {
            printf("%d\t ",r);
        }
        printf("\n");
    }
}