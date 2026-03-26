#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int len = strlen(s);

    int freq[256] = {0};
    int visited[256] = {0};

    // Step 1: Count total distinct characters
    int totalDistinct = 0;
    for(int i = 0; i < len; i++) {
        if(visited[s[i]] == 0) {
            visited[s[i]] = 1;
            totalDistinct++;
        }
    }

    int start = 0, minLen = len + 1, startIndex = 0;
    int count = 0;

    // Step 2: Sliding window
    for(int end = 0; end < len; end++) {

        freq[s[end]]++;

        if(freq[s[end]] == 1)
            count++;

        // When all distinct chars are present
        while(count == totalDistinct) {

            int windowLen = end - start + 1;
            if(windowLen < minLen) {
                minLen = windowLen;
                startIndex = start;
            }

            freq[s[start]]--;
            if(freq[s[start]] == 0)
                count--;

            start++;
        }
    }

    // Print result substring
    for(int i = startIndex; i < startIndex + minLen; i++) {
        printf("%c", s[i]);
    }

    return 0;
}