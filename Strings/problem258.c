#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int frq[256] = {0};
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        frq[str[i]]++;
    }
    int max = 0,max2=0;
    char num = '0',num2='0';
    for(int i=0;i<256;i++){
        
        if(frq[i]>max){
            max2 = max;
            num2 = num;
            max = frq[i];
            num = i;
         
        }else if(frq[i]<max && frq[i]>max2){
            max2 = frq[i];
            num2 = i;
        }
    }
    if(max == 1){
        printf("%c", str[1]);
    }
    else{
        printf("%c", num2);
    }
}