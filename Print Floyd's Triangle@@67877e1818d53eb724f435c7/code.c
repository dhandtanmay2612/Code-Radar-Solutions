#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1;
        for(int k=1;k<=i;k++){
            int d = a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a += 1;
        }printf("\n");
    }return 0;
}