#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0,count1=0;
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9'){
            count1++;
        }else{
            count++;
        }
    }
    printf("%d", count);
}