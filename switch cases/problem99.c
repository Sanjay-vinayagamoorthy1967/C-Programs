#include <stdio.h>

int main(){
    int seat;
    scanf("%d", &seat);
    int time;
    scanf("%d", &time);
    switch(seat){
        case 1:{
            int silver=150;
            if(time>=18){
                printf("Ticket Pice $%d", silver+50);
                break;
            }else{
                printf("Ticket Pice $%d", silver);
            }
        }
        case 2:{
            int gold=250;
            if(time>=18){
                printf("Ticket Pice $%d", gold+50);
            }else{
                printf("Ticket Pice $%d", gold);
            }
        }
    }
}