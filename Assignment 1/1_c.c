#include<stdio.h>

long long int a[100];
long long int fib(int n){
    if(n <= 1){
        return n;
    } 
    if(a[n] != 0){
        return a[n];
    }
    else{
        a[n] = fib(n-1) + fib(n-2);
        return a[n];
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int i = 1, j = 1;
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    for(int i = 0; i <= n;i++){
        long long int x = fib(i);
        printf("%lld ", x);
    }
    return 0;

}