#include <stdio.h>

int main(){
    int account;
    scanf("%d", &account);
    int year;
    scanf("%d", &year);

    switch(account){
        case 1:
            printf("Interest 4%%");
            break;
        case 2:
            if(year<=3){
                printf("5%%");
            }else{
                printf("7%%");
            }
    }
}