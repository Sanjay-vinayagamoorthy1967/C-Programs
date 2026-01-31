#include <stdio.h>

int main(){
    int weight,n,peoples;
    scanf("%d %d", &weight,&n);
    int sum=0,count=0,temp=0;
    while(n--){
        scanf("%d", &peoples);
        sum=sum+peoples;
        if(sum<=weight){
            count++;
        }
        }
        printf("%d\n", count);
        if(sum<=weight){
            printf("Overload: Yes");
        }else{
            printf("Overload: No");
        }
    
}