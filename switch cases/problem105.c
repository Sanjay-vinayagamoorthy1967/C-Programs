#include <stdio.h>

int main(){
    int type;
    scanf("%d", &type);
        switch(type){
            case 1:
                printf("$40");
                break;
            case 2:
                printf("$120");
                break;
            case 3:
                printf("Free");
                break;
    }
}