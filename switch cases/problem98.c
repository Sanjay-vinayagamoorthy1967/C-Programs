#include <stdio.h>

int main(){
    int role;
    scanf("%d", &role);
    int time;
    scanf("%d", &time);

    switch(role){
        case 1:
            printf("Full Access");
            break;
        case 2:
            if(time>=9 && time<=18){
                printf("Limited Access");
                break;
            }else{
                printf("Access Denied");
                break;
            }
    }
}