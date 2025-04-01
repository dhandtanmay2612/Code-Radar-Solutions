#include <stdio.h>

int main(){
    int rows,i,j,space;
    scanf("%d", &rows);
    for(i=0;i<rows;i++){
        for(space=1;space<rows-i;space++){
            printf(" ");
        }
    for(j=0;j<2*i-1;j++){
        printf("* ");
    }
    }
}


