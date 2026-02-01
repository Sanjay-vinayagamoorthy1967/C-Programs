#include <stdio.h>

int main()
{
    int n, vehicle;
    scanf("%d", &n);
    int count = 0, num = 0, temp = 0;
    while (n--)
    {
        scanf("%d", &vehicle);
        if (vehicle > 20)// 10 22 23 10 22 23 24
        {
            count++;
            num++; //1 2 3
            if (num > temp)// 3>2 T
            {
                temp = num;//1 2 3
            }
        }
        else
        {
            num = 0;
        }
    }
    printf("Congestion Minutes:%d\n", count);
    printf("Longest Congestion Streak:%d", temp);
}
