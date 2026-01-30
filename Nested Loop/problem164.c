#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int s=1;s<=(n*2)-(i*2);s++){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int s=i;s<=n;s++){
            printf("*");
        }
        for(int j=1;j<2*i-1;j++){
        printf(" ");
        }
        for(int k=i;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}