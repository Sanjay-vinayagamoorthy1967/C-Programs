#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char words[100];
    char longest[100] ="";
    int k = 0;
    int i = 0;
    int maxlen = 0;
    while(1){
        if(str[i]=='\0' || str[i]==' ' || str[i]=='\n'){
            words[k]='\0';
            int visited[256] = {0};
            int unique = 1;
            for(int j=0;words[j]!='\0';j++){
                if(visited[words[j]]==1){
                    unique = 0;
                    break;
                }
                visited[words[j]] = 1;
            }
            int len = strlen(words);
            if(len>maxlen && unique==1){
                maxlen = len;
                strcpy(longest,words);
            }
            k=0;
            if(str[i]=='\0'){
                break;
            }
        }else{
            words[k++]=str[i];
        }
        i++;
    }
    printf("%s", longest);
}