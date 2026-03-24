#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[10][100];

    for(int i = 0; i < n; i++){
        scanf("%s", str[i]);
    }

    char prefix[100];
    strcpy(prefix, str[0]);  // take first string
 
    for(int i = 1; i < n; i++){
        int j = 0;

        // compare prefix with current string
        while(prefix[j] && str[i][j] && prefix[j] == str[i][j]){
            j++;
        }

        // shrink prefix
        prefix[j] = '\0';
    }

    printf("%s", prefix);
}