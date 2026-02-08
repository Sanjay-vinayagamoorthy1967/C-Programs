#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int len=0,digit=0,max=0;
    int num=0;
    for(int i=0;str[i]!=0;i++){
        int count=0;
        for(int j=i+1;str[j]!=0;j++){
            count=1;
            if(str[j]>str[i]){
                str[i]=str[j];
                count++;
            }
            if(count>max){
                max=count;
                max++;
            }
        }
    }
    printf("%d", max);
}