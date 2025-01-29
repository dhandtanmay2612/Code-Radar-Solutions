#include <stdio.h>
#include <limits.h>

int main(){
    int num;
    scanf("%d", &num);
    if((num>>31) & 1){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}