// Online C compiler to run C program online
#include <stdio.h>

int M=5;
int N=5;
void assign(int arr[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i + j;
        }
    }
}
// Program to pass the 2D array to a function in C
int main(void)
{
    int arr[M][N];
    assign(arr);
    // print 2D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}