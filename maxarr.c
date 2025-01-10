
#include<stdio.h>
int main()
{
    int a[10], n, i, max;
    printf("Enter size : ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++) 
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The maximum element is %d\n", max);
}
