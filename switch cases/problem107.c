#include <stdio.h>

int main(){
    int type,km;
    scanf("%d %d", &type,&km);
        switch(type){
            case 1:
                printf("$%d", km*10);
                break;
            case 2:
                printf("$%d", km*15);
                break;
            case 3:
                printf("$%d", km*20);
                break;
    }
}