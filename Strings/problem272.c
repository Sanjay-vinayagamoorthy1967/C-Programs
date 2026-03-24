#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int k;
    scanf("%s %d", s, &k);

    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++){
        int freq[26] = {0};
        int maxFreq = 0;

        for(int j = i; j < n; j++){

            freq[s[j] - 'A']++;

            if(freq[s[j] - 'A'] > maxFreq){
                maxFreq = freq[s[j] - 'A'];
            }

            int len = j - i + 1;

            if(len - maxFreq <= k){
                if(len > maxLen){
                    maxLen = len;
                }
            }
        }
    }

    printf("%d", maxLen);
}