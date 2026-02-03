#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int current = 1; // 1 2 1 2 3 4
    int maxLength = 1;//1 2 2 2 3 4

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) { // 2>1 3>2 1>3 2>1 3>2 4>2
            current++; //1 2 1 2 3 4
        } else {
            current = 1; //1
        }

        if(current > maxLength) {//1>1 2>1 1>2 2>2 3>2 4>3
            maxLength = current; //2 3 4
        }
    }

    printf("%d", maxLength);
    return 0;
}