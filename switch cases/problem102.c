#include <stdio.h>

int main(){
    int type,minutes;
    scanf("%d %d", &type,&minutes);
        switch(type){
            case 1:
                printf("$%d", minutes*1);
                break;
            case 2:
                printf("$%d", minutes*3);
                break;
            case 3:
                printf("$%d", minutes*10);
                break;
    }
}