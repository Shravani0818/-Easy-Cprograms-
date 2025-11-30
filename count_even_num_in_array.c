#include <stdio.h>

int countEven(int arr[], int n)
{
    int count = 0, i;
    for(i = 0; i < n; i++) 
    {
        if(arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int main() 
{
    int arr[5], i;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
      {
        scanf("%d", &arr[i]);
    }

    int evenCount = countEven(arr, 5);
    printf("Total even numbers = %d\n", evenCount);

    return 0;
}
