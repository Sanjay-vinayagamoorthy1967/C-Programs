#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);//5
    int f=0;
    int l=1;
    for(int i=1;i<=n;i++){//1
        printf("%d", f);//0
        int fib=f+l; //1
        f=l;//1
        l=fib;//1
    }
    
    
}