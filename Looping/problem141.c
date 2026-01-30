#include <stdio.h>

int main(){
    int n,num=0;
    scanf("%d", &n);
    for(int j=2;j<n;j++){
        if(n%j==0){
            num=num+1;
            break;
        }
    }
    if(num==0){
       printf("Prime");
    }else{
        printf("Not a Prime");
    }
    
    
   
}