#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int i = 1, j = 1;
    long long int series = 0;
    printf("0 ");
    for(int k = 0; k < n;k++){
        long long int temp = i;
        i = series;
        j = temp;
        series += j;
        printf("%lld ", series);
    }
}