#include<stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    switch (cases){
        case 1:{
            int a,b;
            scanf("%d %d", &a, &b);
            printf("Sum= %d", a+b);
            break;
        }
        case 2:{
            int c,d;
            scanf("%d %d", &c, &d);
            printf("Product= %d", c*d);
            break;
        }
        case 3:{
            int e,f;
            scanf("%d %d", &e, &f);
            printf("Difference= %d", e-f);
            break;
        }
        case 4:{
            int g,h;
            scanf("%d %d", &g, &h);
            printf("Division= %d", g/h);
            break;
        }
    }
    
    return 0;
}