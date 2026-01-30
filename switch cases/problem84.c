#include <stdio.h>

int main(){
    int amount;
    scanf("%d", &amount);
    int speed;
    scanf("%d", &speed);
    
    switch(speed){
        case 1:{
            int charges=50;
            printf("%d", charges);
            break;
        }
        case 2:{
            if(amount<1000){
                int cha=100;
                printf("%d",cha);
            }else if(amount>=1000){
                printf("Free");
            }
        }

    }
}