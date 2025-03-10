#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=n;j>=i;j--){
            printf("%d ",a);
            a += 1;
        }printf("\n");
    }return 0;
}