#include <stdio.h>

int main(){
    int n,n1;
    scanf("%d", &n);
    int sum=0,count=0,temp=0;cou=0,count1=0;
    while(n--){
        scanf("%d", &n1);//3   2  4
        temp=n1;
        sum=sum+n1;//0+0=3   3+2=5    5+4=9 
        if(sum<=temp){//3>0  T   5>3  9>5  T
                    //3   5  9
            count++;//1  2  3
        }if(cou<count){//0<1  1<2  
            cou=count;//1  2
        }

    }
}