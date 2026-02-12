#include <stdio.h>
#include <string.h>

void vowels(char str[]){
    char *p=str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(*(p+i)=='a'  || *(p+i)=='e'  || *(p+i)=='i'  || *(p+i)=='o'  || *(p+i)=='u'  
        ||*(p+i)=='A'  || *(p+i)=='E'  ||*(p+i)=='I' || *(p+i)=='O'  || *(p+i)=='U'){
            count++;
        }
    }
    printf("%d", count);
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    vowels(str);
}