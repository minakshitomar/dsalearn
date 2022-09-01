//insertion sorting:- splits the array into sorted and unsorted part ..pick the unsortedd value and put it in sorted one
#include<stdio.h>
void sort(int a[], int n)
{
    int i, j, k;
    for(i=0; i<n; i++)
    {
        for(j=i; j>0 && a[j-1] > a[j]; j--)
        {
            k = a[j];
            a[j] = a[j-1];
            a[j-1] = k;
        }
    }
}
int main()
{
    int a[100], i, n;
    printf("enter the total number of elements in the array:\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("after sorting the elements of the array are as follows:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a [i]);
    }
    return 0;
}