#include <stdio.h>

int main(){
    int class;
    scanf("%d", &class);
    int weight;
    scanf("%d", &weight);
    switch(class){
        case 1:
            printf("$%d", weight*300);
            break;
        case 2:
            if(weight<=3){
                printf("Free");
                break;
            }else{
                int wei=weight-3;
                printf("$%d", wei*300);
            }
    }
}