#include<stdio.h>
int isPrime(int num){
    int i,count++;
    for(i=1;i<=n;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2)
        return 1;
    else
        return 0;
}