#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int max = 0;
    int n = strlen(str);
    for(int i=0;i<n;i++){
        int visited[256] = {0};
        int len = 0;
        for(int j=i;j<n;j++){
            if(visited[str[j]]==1){
                break;
            }
            visited[str[j]] = 1;
            len++;
            if(len>max){
                max = len;
            }
        }
    }
    printf("%d", max);
}
