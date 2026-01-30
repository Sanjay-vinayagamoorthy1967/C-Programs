#include <stdio.h>

int main(){
    int parking;
    scanf("%d", &parking);
    int hour;
    scanf("%d", &hour);
    switch(parking){
        case 1:
            printf("Parking Fee $%d", hour*10);
            break;
        case 2:
            printf("Parking Fee $%d", hour*20);
            break;
        default:
            printf("Parking Fee $%d", hour*20);

    }
}