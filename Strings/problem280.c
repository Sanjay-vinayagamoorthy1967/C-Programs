#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[200];
    scanf("%s %s %s", s1, s2, s3);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len3 = strlen(s3);

    // Check length condition
    if(len1 + len2 != len3) {
        printf("No");
        return 0;
    }

    int i = 0, j = 0;

    // Traverse s3
    for(int k = 0; k < len3; k++) {
        if(i < len1 && s3[k] == s1[i]) {
            i++;
        }
        else if(j < len2 && s3[k] == s2[j]) {
            j++;
        }
        else {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
