# include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    int sum=0;

    for(int i=0;i<size-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i]; // 2 3 4 =9
    }
    count=size*(size+1)/2;//4*(4+1)/2=10
    int missing=count-sum;//10-1
    printf("%d",missing);
}