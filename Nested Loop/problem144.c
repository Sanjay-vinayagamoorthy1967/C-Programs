#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);//5
    for(int i=1;i<=num;i++){//2  2<=5  T
        for(int j=1;j<=num;j++){//5  5<=5  T  6  6<=5  F
            printf("*");//*****
        }                   
        printf("\n");
    }
}