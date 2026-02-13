#include <stdio.h>
#include <string.h>

void palindrome(char str[]){

    int len=strlen(str);
    char *p=str;

    int i=0;
    int j=len-2;
    int found=0;
    while(i<j){
        if(*(p+i)!=*(p+j)){
            found=1;
            break;
        }
        i++;
        j--;
    }
    if(found==0){
        printf("palindrome");
    }else{
        printf("Not palindrome");
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    palindrome(str);
}