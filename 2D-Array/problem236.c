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
    int count,count1,index=-1;
    for(int i=0;i<r;i++){
        count=0,count1=0;
        for(int j=0;j<c-1;j++){
            if(a[i][j]%2==0){
                count++;
            }else if(a[i][j]){
                count1++;
            }
        }
        if(count==count1){
            index=i;
        }
    }   printf("%d", index);
   
}
