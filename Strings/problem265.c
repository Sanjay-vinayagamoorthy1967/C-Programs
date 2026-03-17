// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str1[100];
//     char str2[100];
//     char result[100];
//     scanf("%s", str1);
//     scanf("%s", str2);
//     int index = -1;
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     for(int i=0;i<len2;i++){
//         for(int j=0;j<len1;j++){
//             if(str2[0]==str1[j]){
//                 index = j;
//                 break;
//             }
//         }
//     }
//     int l = 0;
//     int k = 0;
//     for(int i=index;i<len1;i++){
//         if(str1[i]==str2[l++]){
//             result[k++] = str1[i];
//         }
//     }
//     int m = 0;
//     for(int i=l;i<len2;i++){    
//         if(str2[i]==str1[m++]){
//             result[k++] = str2[i];
//         }
//     }
//     result[k] = '\0';
//     int count = 1;
//     for(int i=0;i<len1;i++){
//         if(str1[i]!=result[i]){
//             count=0;
//         }
//     }
//     if(count){
//         printf("Yes");
//     }else{
//         printf("No");
//     }

// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];
    char temp[200];

    scanf("%s", s1);
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1 != len2){
        printf("No");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("Yes");
    else
        printf("No");
}