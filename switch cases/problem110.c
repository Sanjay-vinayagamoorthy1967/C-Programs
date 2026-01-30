#include <stdio.h>

int main(){
    int traffic;
    scanf("%d", &traffic);
        switch(traffic){
            case 1:
                printf("$1000");
                break;
            case 2:
                printf("$1500");
                break;
            case 3:
                printf("$2000");
                break;
    }
}