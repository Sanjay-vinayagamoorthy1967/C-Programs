#include <stdio.h>

int main(){
    int book,days;
    scanf("%d %d", &book,&days);
    switch(book){
        case 1:
            printf("%d", days*2);
            break;
        case 2:
            printf("%d", days*5);
            break;
    }
}