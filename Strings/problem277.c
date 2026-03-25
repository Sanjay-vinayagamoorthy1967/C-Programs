#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Case 1: Replace
    if(len1 == len2) {
        int diff = 0;
        for(int i = 0; i < len1; i++) {
            if(s1[i] != s2[i])
                diff++;
        }
        if(diff == 1)
            printf("Yes");
        else
            printf("No");
    }

    // Case 2: Insert/Delete
    else if(len1 + 1 == len2 || len1 - 1 == len2) {
        int i = 0, j = 0, diff = 0;

        while(i < len1 && j < len2) {
            if(s1[i] != s2[j]) {
                diff++;
                if(diff > 1) break;

                if(len1 > len2)
                    i++;   // delete from s1
                else
                    j++;   // insert into s1
            } else {
                i++;
                j++;
            }
        }

        if(diff <= 1)
            printf("Yes");
        else
            printf("No");
    }

    else {
        printf("No");
    }

    return 0;
}