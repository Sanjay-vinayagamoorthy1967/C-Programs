#include <stdio.h>

int main(){
    int plan;
    scanf("%d", &plan);
    float data;
    scanf("%f", &data);

    switch(plan){
        case 1:
                if(data<=1){
                    printf("Normal speed");
                    break;
                }else{
                    printf("Speed reduced");
                    break;
                }
        case 2:
                if(data<=2){
                    printf("Normal speed");
                    break;
                }else{
                    printf("Extra Charges Applied");
                    break;
                }
                
    }
}