#include <stdio.h>

int main(){
    int rows,i,j,space;
    scanf("%d", &rows);

    for(int i=1;i<=rows;i++){
        for(space=1;space<=rows - i;space++){
            printf(" ");
        }
        for(int j=1;j=2*rows-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

