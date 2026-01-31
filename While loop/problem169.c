#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    int count = 0;
    int temp = 0;
    int max1=0;
    while (n1--){
        scanf("%d", &n2); //7
            if(n2==0){
                count++;
                if(max1<count){
                    max1=count;
                }
            }else{
                count=0;
            }
    }
    printf("Longest Violation Streak:%d", max1);
}