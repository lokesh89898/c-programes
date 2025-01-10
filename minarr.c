#include<stdio.h>
int main()
{
    int a[10], n, i, min;
    printf("Enter size : ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 1; i < n; i++) 
    {
        if (a[i] <min)
        {
            min= a[i];
        }
    }
    printf("The minimum element is %d\n", min);
}
