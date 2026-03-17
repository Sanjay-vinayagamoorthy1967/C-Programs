#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char tar[100];
    char result[100];
    int k=0;
    char smallest[100] = "";
    scanf("%s", str);
    scanf("%s", tar);
    int len1 = strlen(str);
    int len = strlen(tar);
    int count = 0;
    int count1 = 0;
    int maxlen = 10000;
    for(int i=0;i<len1;i++){
        for(int j=i;j<len1;j++){
                result[k++]=str[j];
                result[k] = '\0';
                count1++;
                
            for(int x=0;x<len;x++){
                if(str[j]==tar[x]){
                count++;
                break;
            }
        }
            if(count==len){
                if(count1<maxlen){
                    maxlen = count1;
                    strcpy(smallest,result);
                }
                count=0;
                count1=0;
                k=0;
                break;
            }
        }
    }
    if(len1<len){
        printf("-1");
    }else{
        printf("%s", smallest);
    }
}