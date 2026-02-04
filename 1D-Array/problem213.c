#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {//5 2 1 3 6
        scanf("%d", &arr[i]);
    }

    int num = arr[0];//5

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) < abs(num)) {//2<5   1<2  3<1  6<1
            num = arr[i];//2  1
        }
        else if (abs(arr[i]) == abs(num) && arr[i] > num) {
            num = arr[i];
        }
    }

    printf("%d", num);
    return 0;
}
