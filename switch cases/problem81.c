#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    int balance;
    scanf("%d", &balance);
    int withdrawal;
    scanf("%d", &withdrawal);
    switch(cases){
        case 1:
            if(balance>=withdrawal){
                printf("Transaction Successfull");
                break;
            }else{
                printf("Transcation Rejected");
                break;
            }
        case 2:
            if(withdrawal<=5000){
                printf("Transaction Successfull");
                break;
            }else{
                printf("Limit Exceeded");
                break;
            }

    }
}
