#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)                                                  
    {
        for (int j = 0; j < c; j++)
        { 
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0],sec = -1; 
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        
        {
            if (arr[i][j] > max) //  4000>0  T  9000>4000  1000>9000  7000>1000  3000>7000   9000>3000
            {                    // 2000>9000  8000>2000  5000>8000
                sec = max;       //  0  4000 1000 3000 2000
                max = arr[i][j]; // 4000  9000 7000  9000  8000
            }else if(arr[i][j]>sec && arr[i][j]<max){
                sec=arr[i][j];
            }
            
            }
    }
    printf("%d", sec);
}