#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int freq[26] = {0};
    int max = 0;
    int min = 100;
    for(int i=0;i<len;i++){
        freq[str[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0){
            if(freq[i] > max){
                max = freq[i];
            }
            if(freq[i] < min){
                min = freq[i];
            }
        }
    }
    printf("%d", max - min);
}