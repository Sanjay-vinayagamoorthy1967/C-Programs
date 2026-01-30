#include <stdio.h>

int main(){
    int vehicle;
    scanf("%d", &vehicle);
    int trip;
    scanf("%d", &trip);
    switch(vehicle){
        case 1:
            if(trip==1){
                printf("$100");
                break;
            }else if(trip>=2 && trip<=10){
                printf("$800");
                break;
            }else{
                printf("$800");
                break;
            }
        case 2:{
            if(trip==1){
                printf("$240");
            }else{
                
            printf("$%d", trip*240);
            break;
            }
        }
    }
}