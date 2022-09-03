//sorting in descending order ...simple si sorting using swapping.
#include<stdio.h>
int main()
{
    int num[20], i, j, a, n;
    printf("enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]<num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("the numbers in descending order are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}