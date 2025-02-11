#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    (x%x==0 && x%1==0)?printf("Prime"):printf("Not Prime");
}