#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", &str);
    int len=strlen(str)-1;

    for(int i=len;i>=0;i--){
        printf("%c", str[i]);
    }
    
}