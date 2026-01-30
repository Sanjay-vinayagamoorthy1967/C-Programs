#include <stdio.h>

int main(){
    int type;
    scanf("%d", &type);
    int unit;
    scanf("%d", &unit);
    switch(type){
        case 1:{
            if(unit<=30){
                printf("%d", unit*5);
                break;
            }else{
                int digit=30*5;
                int num=unit-30;
                int total=num*8;
                printf("%d", digit+total);
                break;
            }
        }
        case 2:
            printf("%d", unit*10);
            break;
    }
}