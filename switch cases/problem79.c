#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num;
    scanf("%d", &num);
    switch(n){
        case 1:
            if(num<=100){
                num=num*3;
                printf("Bill $%d", num);
                break;
            }else if(num>100 && num<=200){
                num=num-100;
                int dig = num*5;
                int gov = dig+300;
                printf("Bill $%d", gov-80);
                break;
            }else if(num>200){
                num=num-200;
                int off=num*7;
                int offer=off+600;
                printf("Bill $%d", offer-80);
                break;
            }
        case 2:
            if(num<=100){
                num=num*7;
                printf("Bill $%d", num);
                break;
            }else if(num>100){
                num=num-100;
                int val=num*10;
                printf("Bill $%d", val+700);
                break;
            }
            
            
        default:
            printf("Invalid");
    }
}