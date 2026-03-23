#include<stdio.h>
#include<string.h>

int main(){
    char s[100], p[100];
    scanf("%s %s", s, p);

    int n = strlen(s);
    int m = strlen(p);
    int count = 0;

    for(int i = 0; i <= n - m; i++){
        int freq[256] = {0};

        // store frequency of pattern
        for(int k = 0; k < m; k++){
            freq[p[k]]++;
        }

        int flag = 1;

        // check substring
        for(int j = i; j < i + m; j++){
            if(freq[s[j]] == 0){
                flag = 0;
                break;
            }
            freq[s[j]]--;
        }

        if(flag == 1){
            count++;
        }
    }

    printf("%d", count);
}