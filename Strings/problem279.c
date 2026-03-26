#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int k;
    scanf("%s %d", s, &k);

    int freq[256] = {0};
    int start = 0, maxLen = 0, distinct = 0;

    for(int end = 0; s[end] != '\0'; end++) {

        // Add character
        if(freq[s[end]] == 0)
            distinct++;
        freq[s[end]]++;

        // If more than k distinct, shrink window
        while(distinct > k) {
            freq[s[start]]--;
            if(freq[s[start]] == 0)
                distinct--;
            start++;
        }

        // If exactly k distinct, update max length
        if(distinct == k) {
            int len = end - start + 1;
            if(len > maxLen)
                maxLen = len;
        }
    }

    printf("%d", maxLen);
    return 0;
}