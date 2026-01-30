#include <Stdio.h>

int main(){
    int code;
    scanf("%d", &code);
    int experience;
    scanf("%d", &experience);
    switch(code){
        case 1:{
            int salary=50000;
            if(experience>=3){
                int amount=experience*5000;
                salary=salary+amount;
                printf("Salary $%d", salary);
                break;
                }
            }
        case 2:{
                int sal=35000;
                if(experience>=3){
                int dig=experience*5000;
                sal=sal+dig;
                printf("Salary $%d", sal);
                break;
                }
        }
    }
}