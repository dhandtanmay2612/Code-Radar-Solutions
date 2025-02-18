#include<stdio.h>

int main(){
    int age,stat;
    scanf("%d", &age);
    if(age>=18 && stat==1){
        printf("Eligible");
    }
    else if(age<18 || stat==0){
        printf("Not Eligible");
    }
    return 0;
}