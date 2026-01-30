#include <stdio.h>

int main(){
    int wheeler;
    scanf("%d", &wheeler);
    int age;
    scanf("%d", &age);
    switch(wheeler){
        case 1:
            if(age<=5){
                printf("$1500");
                break;
            }else{
                printf("$2500");
                break;
            }
        case 2:
            if(age<=5){
                printf("$4000");
                break;
            }else{
                printf("$6000");
                break;
        }
    }
}