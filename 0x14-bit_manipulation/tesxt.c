#include <stdio.h>
#include <string.h>
void printArray(int arr[], int n)
{
for (int i = 0 ; i<n; i++)
{
    printf("%d ", arr[i]);
}
}
int main()
{
    int n = 10;
    int arr[10];
    memset(arr, 1, 5 * sizeof(int));
    printf("Helllo :\n");
    printArray(arr, n);
    
return 0;
}
