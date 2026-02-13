// #include <stdio.h>
// #include <string.h>

// void concatenate(char str1[],char str2[]){
//     char *p=str1;
//     char *s=str2;
//     int len=strlen(str1);
//     for(int i=0;str1[i]!='\0' && str1[i]!='\n';i++){
//         printf("%c", *(p+i));
//     if(i==len-2){
//     for(int j=0;str2[j]!='\0' && str2[j]!='\n';j++){
//         printf("%c", *(s+j));
//     }
//     }
//     }    
// }


// int main(){
//     char str1[100];
//     fgets(str1,sizeof(str1),stdin);
//     char str2[200];
//     fgets(str2,sizeof(str2),stdin);
//     concatenate(str1,str2);
// }


#include <stdio.h>
#include <string.h>

void concatenate(char str1[],char str2[]){
    char *p=str1;
    char *s=str2;
    
    for(int i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        printf("%c", *(p+i));
    }
    for(int j=0;str2[j]!='\0' && str2[j]!='\n';j++){
        printf("%c", *(s+j));
    }     
}
int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[200];
    fgets(str2,sizeof(str2),stdin);
    concatenate(str1,str2);
}