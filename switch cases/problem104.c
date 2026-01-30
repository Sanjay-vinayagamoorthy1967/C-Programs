#include <stdio.h>

int main(){
    int type;
    scanf("%d", &type);
        switch(type){
            case 1: case 2: case 3: case 4: case 5:
                printf("%d", type*50);
                break;
            
            case 6: case 7: case 8: case 9: case 10:
                printf("%d", type*100);
                break;
            default:
                printf("%d", type*200);
                break;
    }
}