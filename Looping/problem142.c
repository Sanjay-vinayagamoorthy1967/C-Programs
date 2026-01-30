#include <stdio.h>

int main(){
    int n,rev=0,d=0;
    scanf("%d", &n);
    int temp=n;  
    for(;n>0;){ 
        d=n%10; 
        rev=rev*10+d;                       
        n=n/10;
    }
    

    if(rev==temp){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}