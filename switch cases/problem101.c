#include <stdio.h>

int main(){
    int type,amount;
    scanf("%d %d", &type,&amount);
    switch(type){
        case 1:{
            int dis=(5*amount)/100;
            int total=amount-dis;
            printf("$%d", total);
            break;
        }
        case 2:{
            int discount=(15*amount)/100;
            int tot=amount-discount;
            printf("$%d", tot);
            break;
        }

    }
}