#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    int secondLargest=0;
 
    for(int j=0;j<size;j++){  //.   F.         T          F.
        if(arr[j]>max){     //  4000 >4000.  4000>9000.  1000>9000.  7000>9000
            secondLargest=max;// 9000
            max=arr[j];    // 9000
        }
        else if(arr[j]<max && arr[j]>secondLargest){  // 4000<4000. &&. 4000>0.  1000<9000 && 1000>9000
            secondLargest=arr[j];//           F F
        }
    }

    printf("%d",secondLargest);
    return 0;
}