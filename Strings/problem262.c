#include <stdio.h>
#include <string.h>

int main(){

    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int map1[256] = {0};
    int map2[256] = {0};

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1 != len2){
        printf("No");
        return 0;
    }

    for(int i = 0; s1[i] != '\0'; i++){

        if(map1[s1[i]] == 0 && map2[s2[i]] == 0){
            map1[s1[i]] = s2[i];
            map2[s2[i]] = s1[i];
        }
        else{
            if(map1[s1[i]] != s2[i] || map2[s2[i]] != s1[i]){
                printf("No");
                return 0;
            }
        }

    }

    printf("Yes");

}