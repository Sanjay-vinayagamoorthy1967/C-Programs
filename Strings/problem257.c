#include <stdio.h>
#include <string.h>
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n'; i++){
        int count = 1 ;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    
}