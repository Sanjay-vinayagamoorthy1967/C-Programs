#include <stdio.h>

int main(){
    int plan;
    scanf("%d", &plan);
    char payment[50];
    scanf("%s", payment);

    switch(plan){
        case 1:{
            int amount=199;
            if(payment=="UPI-11"|| payment=="Card-12"){
                int total=amount-20;
                printf("%d", total);
            }else{
                printf("%d", amount);
            }
        }
        case 2:{
            int amo=399;
            if(payment=="UPI-11"|| payment=="Card-12"){
                int total=amo-20;
                printf("%d", total);
            }else{
                printf("%d", amo);
            }
        }

    }
}