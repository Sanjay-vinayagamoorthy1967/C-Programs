#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);

    int freq[26] = {0};

    // count frequency
    for(int i = 0; s[i] != '\0'; i++){
        freq[s[i] - 'a']++;
    }

    int expected = 0;

    // find first non-zero frequency
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0){
            expected = freq[i];
            break;
        }
    }

    int flag = 1;

    // check all frequencies
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0 && freq[i] != expected){
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Yes");
    else
        printf("No");
}