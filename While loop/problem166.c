#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    int count = 0;
    int count1 = 0;
    int temp = 0;
    int max1=0;
    while (n1--){
        scanf("%d", &n2); 
        if (n2 > 70){
            count++;//1
            if(n2>temp && n2>70){
                temp=n2;
                count1++;
                if(max1<count1){
                    max1=count;
                }
            }
        } else{ 
                count1 = 0;
                temp=0;
            } 
    }
    printf("Noise Violations:%d\n", count);
    printf("Longest Violation Streak:%d", max1);
}