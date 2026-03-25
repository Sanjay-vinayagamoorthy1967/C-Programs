#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int k;
    scanf("%s %d", s, &k);

    char stack[100];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++){

        // remove bigger characters
        while(top >= 0 && stack[top] > s[i] && k > 0){
            top--;
            k--;
        }

        stack[++top] = s[i];  // push
    }

    // if k still left, remove from end
    while(k > 0){
        top--;
        k--;
    }

    // print result
    for(int i = 0; i <= top; i++){
        printf("%c", stack[i]);
    }
}