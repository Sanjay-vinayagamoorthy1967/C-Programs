#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    char stack[100];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(top >= 0 && stack[top] == s[i])
        {
            top--;  // remove (pop)
        }
        else
        {
            stack[++top] = s[i];  // add (push)
        }
    }

    // print result
    if(top == -1)
    {
        printf("Empty");
    }
    else
    {
        for(int i = 0; i <= top; i++)
        {
            printf("%c", stack[i]);
        }
    }
}