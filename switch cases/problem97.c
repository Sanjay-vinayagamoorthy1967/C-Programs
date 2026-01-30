#include <stdio.h>

int main(){
    int category;
    scanf("%d", &category);
    int distance;
    scanf("%d", &distance);
    switch(category){
        case 1:
            if(distance<=30){
                printf("Eligible");
                break;
            }else{
                printf("Eligible with extra Fee");
            }
        case 2:
            if(distance<=30){
                printf("Eligible");
                break;
            }else{
                printf("Not Eligible");
            }
        
    }
}