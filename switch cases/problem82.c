#include <stdio.h>

int main(){
    int class;
    scanf("%d", &class);
    int age;
    scanf("%d", &age);
    switch(class){
        case 1:{
            int sleeper=300;
            if(age<12){
                printf("Fare $%d", age-150);
                break;
            }else if(age>60){
                int dis=(sleeper*33)/100;
                int val=sleeper-dis;
                printf("Fare $%d", val);
                break;
            }else{
                printf("Fare $%d", sleeper);
                break;
            }
        }
        case 2:{
            int ac=1000;
            if(age<12){
                int discount=(50*ac)/100;
                printf("Fare $%d", discount);
                break;
            }else if(age>60){
                int disc=(33*ac)/100;
                printf("Fare $%d", disc);
                break;
            }else{
                printf("Fare $%d", ac);
                break;
            }
        }
        
    }
}