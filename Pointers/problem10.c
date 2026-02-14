#include <stdio.h>
#include <string.h>

void words(char str[]){
    char *p=str;
    int count=0;
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(*(p+i)==' '){
            count++;
        }
    }
    printf("%d", count+1);
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    words(str);
}