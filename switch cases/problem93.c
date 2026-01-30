#include <stdio.h>

int main(){
    int mode;
    scanf("%d", &mode);
    char category;
    scanf(" %c", &category);
    switch(mode){
        case 1:
            if(category=='R'){
                printf("$5000");
                break;
            }else if(category=='S'){
                printf("$3000");
                break;
            }
        case 2:
            if(category=='R'){
                printf("$9000");
                break;
            }else if(category=='S'){
                printf("$7000");
                break;
        }
    }
}