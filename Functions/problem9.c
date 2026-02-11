#include <stdio.h>

void palindrome(int n){
    int temp=n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;   
    }
    if(temp==rev){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    palindrome(n);
}