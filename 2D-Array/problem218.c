#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int count=0;
    for(int i=0;i<r;i++){//   1
        int duplicate=0;
        for(int j=0;j<c;j++){//   
            for(int k=i;k<j;k++){
                if(a[i][j]==a[i][k]){
                duplicate=1;
            }
            }
        }if(duplicate==0){
        count++;
    }
    }
    printf("%d", count);
}
