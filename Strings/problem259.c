#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if(str[len-1] == '\n'){
        str[len-1] = '\0';
        len--;
    }
    int start = 0;
    int maxLen = 1;
    for(int i = 0; i < len; i++){
        int left = i;
        int right = i;
        while(left >= 0 && right < len && str[left] == str[right]){
            if(right - left + 1 > maxLen){
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while(left >= 0 && right < len && str[left] == str[right]){
            if(right - left + 1 > maxLen){
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    for(int i = start; i < start + maxLen; i++){
        printf("%c", str[i]);
    }

}