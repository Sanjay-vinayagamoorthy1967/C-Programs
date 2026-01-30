#include <stdio.h>

int main(){
    int loan;
    scanf("%d", &loan);
    int score;
    scanf("%d", &score);

    switch(loan){
        case 1:
            if(score>=700){
                printf("Approved");
                break;
            }else if(score>=650 && score <=699){
                printf("Manual Review");
                break;
            }
        case 2:
            if(score>=700){
                printf("Approved");
                break;
            }else if(score<700){
                printf("Rejected");
                break;
            }
    }
}