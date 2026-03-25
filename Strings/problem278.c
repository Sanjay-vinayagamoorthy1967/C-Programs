#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    int freq[26] = {0};

    // Count characters in s1
    for(int i = 0; s1[i] != '\0'; i++) {
        freq[s1[i] - 'a']++;
    }

    
    for(int i = 0; s2[i] != '\0'; i++) {
        freq[s2[i] - 'a']--;
    }

    // Count deletions
    int deletions = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] < 0)
            deletions += -freq[i];
        else
            deletions += freq[i];
    }

    printf("%d", deletions);

    return 0;
}
