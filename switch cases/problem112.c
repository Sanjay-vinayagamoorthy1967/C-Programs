#include <stdio.h>

int main(){
    int plan;
    scanf("%d", &plan);
        switch(plan){
            case 1: 
                printf("Speed 40 Mbps");
                break;
            case 2:
                printf("Speed 100 Mbps");
                break;
            case 3:
                printf("Speed 300 Mbps");
                break;
    }
}
