#include <stdio.h>

int main(){
    int attempt;
    scanf("%d", &attempt);
    int mark;
    scanf("%d", &mark);
    switch(attempt){
        case 1:
            if(mark>=80){
                printf("Excellent");
                break;
            }else{
                printf("Not Qualified");
            }
        case 2:
            if(mark>=60){
                printf("Good");
                break;
            }else{
                printf("Not Qualified");
            }
        default:
                printf("Need Improvement");
                break;
    }
}