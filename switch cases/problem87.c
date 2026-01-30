#include <stdio.h>

int main(){
    int room;
    scanf("%d", &room);
    char ch;
    scanf(" %c", &ch);
    switch(room){
        case 1:{
            if(ch=='A'){
                printf("$2500");
            }else if(ch=='B'){
                printf("$2000");
            }
        }
        case 2:{
            if(ch=='C'){
                printf("$4000");
            }else if(ch=='D'){
                printf("$3000");  
            }
        }
    }
}