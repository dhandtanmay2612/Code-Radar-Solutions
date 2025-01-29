#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num <= INT_MIN){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}