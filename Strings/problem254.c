#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);

    char ch[100],k=0;

    for(int i=0;str[i]!='\0';i++){
        ch[k]=str[i];
        k++;
    }

    for(int i=0;str[i]!='\0';i++){
        printf("%c", ch[i]);
    }
    
}