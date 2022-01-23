#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    double a[n][n], b[n][n], c[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // scanf("%lf", &a[i][j]);
            float x = (float)rand()/(float)(RAND_MAX/10);
            a[i][j] = x;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // scanf("%lf", &b[i][j]);
            float y = (float)rand()/(float)(RAND_MAX/10);
            b[i][j] = y;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            for(int k = 0; k < n;k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j]; 
            }
            printf("%.2lf ", c[i][j]);
        }
        printf("\n");
    }
    return 0;

}