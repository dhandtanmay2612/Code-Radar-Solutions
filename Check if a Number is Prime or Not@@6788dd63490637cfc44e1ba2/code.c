#include<stdio.h>
#include <stdbool.h>

int main(){
    int x;
    scanf("%d", &x);
    bool isPrime=true;
    for(int i=0;i<=x;i++){
        if(i%x==0){
            isPrime=false;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}