#include <stdio.h>
int main(){

    int marks;
    scanf("%d", &marks);
     int mark=marks/10;
    switch(mark){
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        case 4:
            printf("F");
            break;
        case 3:
            printf("Supplementary");
            break;
        default:
            printf("Fail");
            break;
        
        
        
    }
}