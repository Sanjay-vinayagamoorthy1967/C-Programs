#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int n = strlen(s);
    int max = 0;

    for(int i = 1; i < n; i++)
    {
        int flag = 1;

        for(int j = 0; j < i; j++)
        {
            if(s[j] != s[n - i + j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            max = i;
        }
    }

    printf("%d", max);
}