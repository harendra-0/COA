#include<stdio.h>


int main(){

    int n;
    scanf("%d", &n);
    int i = 1, j = 1;
    long long int series[n+1];
    series[0] = 0;
    series[1] = 1;
    series[2] = 1;

    for(int i = 3; i < n+1;i++){
        series[i] = series[i-1] + series[i-2];
    }
    for(int i = 0; i <= n; i++){
        printf("%d ", series[i]);
    }
    return 0;

}