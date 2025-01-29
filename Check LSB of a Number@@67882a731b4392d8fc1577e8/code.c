#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num % 2 == 1){
        printf("Set");
    }
    else{
        printf("Not set");
    }
    return 0;
}
