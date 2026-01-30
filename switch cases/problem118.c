#include <stdio.h>

int main(){
    int Warranty;
    scanf("%d", &Warranty);
        switch(Warranty){
            case 1:
                printf("Under Warranty");
                break;
            case 2:
                printf("Limited Warranty");
                break;
            case 3:
                printf("Out of Warranty");
                break;
    }
}