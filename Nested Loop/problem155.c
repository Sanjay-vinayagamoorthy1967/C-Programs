#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);//5
    for(int i=0;i<=num;i++){//1<=5  T  2<=5  T
        for(int j=0;j<i;j++){//1  1<=1  T  1<=2  T
            printf("%d", (i+j)%2);
        }                   
        printf("\n");
    }
}