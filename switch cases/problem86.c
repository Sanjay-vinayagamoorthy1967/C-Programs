#include <stdio.h>

int main(){
    int marks;
    scanf("%d", &marks);
    int attedance;
    scanf("%d", &attedance);

    if(attedance<75){
        printf("Fail");
    }else if(marks>=75){
        printf("Distinction");
    }else if(marks>=50 && marks <75){
        printf("Pass");
    }else{
        printf("Fail");
    }
}