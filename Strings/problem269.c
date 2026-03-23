#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    char store[100];
   
    int k=0;
   
    for(int i=0;i<len;i++){
        if(str[i] != ' ' && str[i] != '\n'){
            store[k++] = str[i];
        }else{
            for(int i=k-1;i>=0;i--){
                printf("%c", store[i]);
            }
            printf(" ");
            k = 0;
        }  
    }

    for(int j = k - 1; j >= 0; j--){
        printf("%c", store[j]);
    }
    
    
}