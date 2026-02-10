#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);

    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int index=0;
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(str[i]==ch[0]){
            index=i;
            break;
        }
    }
      printf("%d", index);
       
    
}