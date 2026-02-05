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
    int temp=0;
    int num=0,min=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){//-10 2 -1 3
            if(a[i][j]<temp){//-10<0  T  2<-10
                min=temp;//0
                temp=a[i][j];//-10  
            }else if(a[i][j]>temp && a[i][j]<0){
                min=a[i][j];
            }
        }
    }
    int temp1=0,max=0,num1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>temp1){
                max=temp1;
                temp1=a[i][j];
            }else if(a[i][j]<temp && a[i][j]>0){
                max=a[i][j];
            }
        }
    }
    int pro1=min*temp;
    int pro2=max*temp1;
    if(pro1>pro2){
        printf("%d", pro1);
    }else{
        printf("%d", pro2);
    }
}