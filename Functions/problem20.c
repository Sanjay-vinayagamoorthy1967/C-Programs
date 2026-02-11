#include <stdio.h>

void choice(int n1,int n2,char n3){
    int num=0;
    switch(n3){
        case ('+'):
                num=n1+n2;
                break;
        case ('-'):
                num=n1-n2;
                break;
        case ('*'):
                num=n1*n2;
                break;
        case ('/'):
                num=n1/n2;
                break;
    }

        printf("%d", num);
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    char n3;
    scanf(" %c", &n3);
    choice(n1,n2,n3);
    
}