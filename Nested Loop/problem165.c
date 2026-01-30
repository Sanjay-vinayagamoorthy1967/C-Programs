#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size=n*2-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top=i;
            int left=j;
            int right=(size-1)-j;
            int bottom=(size-1)-i;
            int min=top;
            if(left<min){
                min=left;
            }
            if(right<min){
                min=right;
            }
            if(bottom<min){
                min=bottom;
            }
            printf("%d",n-min);
        }
        printf("\n");
    }
}