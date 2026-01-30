#include<stdio.h>

int main(){
    int a,b,cases;
    scanf("%d %d %d", &a, &b, &cases);
    
    switch(cases){
        case 1:
            printf("%d", a+b);
            break;
        case 2:
            printf("%d", a-b);
            break;
    }
    return 0;
}