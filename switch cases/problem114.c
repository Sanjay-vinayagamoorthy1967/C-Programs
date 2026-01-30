#include <stdio.h>

int main(){
    int plan;
    scanf("%d", &plan);
        switch(plan){
            case 1: 
                printf("Upgrade Fee $300");
                break;
            case 2:
                printf("Upgrade Fee $800");
                break;
            case 3:
                printf("Upgrade Fee $1500");
                break;
    }
}
