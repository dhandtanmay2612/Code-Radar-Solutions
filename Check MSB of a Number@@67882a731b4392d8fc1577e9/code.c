#include <stdio.h>
#include<limits.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num >= (1 << 31)){
        printf("Set\n");
    }
    else{
        printf("Not Set");
    }
    return 0;
}