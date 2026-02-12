#include <stdio.h>
#include <string.h>

void copy(char str[]){
    char *p=str;
    char ch[100];
    char *s=ch;
    for(int i=0;str[i]!='\0';i++){
        *(s+i)=*(p+i);
    }
    for(int i=0;i<str[i]!='\0';i++){
        printf("%c", *(s+i));
    }

}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    copy(str);
}