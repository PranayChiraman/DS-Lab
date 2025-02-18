#include <stdio.h>
void kth_Largest(int arr[], int n, int m) 
{
    int i, j, l, t, s;
    for (l = 0; l < m - 1; l++) 
    {
        int max = arr[0]; 
        for (i = 1; i < n; i++) 
        {
            if (arr[i] > max) 
            {
                max = arr[i];
            }
        }
        for (t = 0; t < n; t++) 
        {
            if (arr[t] == max) 
            {
                for (s = t; s < n - 1; s++) 
                {
                    arr[s] = arr[s + 1];
                }
                n--;  
                break;
            }
        }
    }

    int M = arr[0];  
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > M) 
        {
            M = arr[i];
        }
    }
    printf("The %dth Largest Element in the given array is %d\n", m, M);
}

int main() 
{
    int a[] = {2, 6, 3, 9, 5, 0, 2, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = 3;
    kth_Largest(a, n, m);
    return 0;
}