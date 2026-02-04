#include <stdio.h>

int main() {
    int n, i;
    int a[n];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1=a[0], max2=a[1];//5 4 3 6 7 
    int min1=a[0], min2=a[1];
    if(max1 < max2) {
        int temp=max1;
        max1=max2;
        max2=temp;
    }

    if(min1 > min2) {
        int temp=min1;
        min1=min2;
        min2=temp;
    }
    for(i=2;i<n;i++) {
        if(a[i]>max1) {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2) {
            max2=a[i];
        }

        if(a[i]<min1) {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2) {
            min2=a[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if(product1 > product2)
        printf("%d", product1);
    else
        printf("%d", product2);

    return 0;
}