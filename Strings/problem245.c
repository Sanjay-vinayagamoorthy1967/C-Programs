#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int i=0;
    int j=len-2;
    int count=1;
    while(i<j){
        if(str[i]!=str[j]){
            count=0;
            break;
        }
        i++;
        j--;
    }
    if(count==1){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }
   
}