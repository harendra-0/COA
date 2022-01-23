#include<stdio.h>

long long int fib(int n){
    if(n <= 1){
        return n;
    } else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int i = 1, j = 1;
    for(int i = 0; i <= n;i++){
        long long int x = fib(i);
        printf("%lld ", x);
    }
    return 0;

}