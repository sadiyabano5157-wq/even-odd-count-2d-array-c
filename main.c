#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {12,45,7},
        {89,23,56},
        {11,90,34}
    };

    int even_count = 0;
    int odd_count = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] % 2 == 0)
            {
                printf("Even = %d\n", arr[i][j]);
                even_count++;
            }
            else
            {
                printf("Odd = %d\n", arr[i][j]);
                odd_count++;
            }
        }
    }

    printf("Even Count = %d\n", even_count);
    printf("Odd Count = %d\n", odd_count);

    return 0;
}
