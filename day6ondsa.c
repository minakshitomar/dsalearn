#include <stdio.h>
void merge_sort(int i, int j, int a[], int b[]) 
{
    int mid, pointer_left, pointer_right, k;
    if (j <= i) 
    {
        return;     
    }
    mid = (i + j) / 2;
    merge_sort(i, mid, a, b);     
    merge_sort(mid + 1, j, a, b);   

    pointer_left = i;       
    pointer_right = mid + 1;
    for (k = i; k <= j; k++) 
    {
        if (pointer_left == mid + 1) 
        {      
            b[k] = a[pointer_right];
            pointer_right++;
        } 
        else if (pointer_right == j + 1) 
        {      
            b[k] = a[pointer_left];
            pointer_left++;
        } 
        else if (a[pointer_left] < a[pointer_right]) 
        {      
            b[k] = a[pointer_left];
            pointer_left++;
        } 
        else 
        {      
            b[k] = a[pointer_right];
            pointer_right++;
        }
    }
    for (k = i; k <= j; k++) 
    {      
        a[k] = b[k];
    }
}
int main() 
{
  int a[100], b[100], n, i, d ;
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  merge_sort(0, n - 1, a, b);
  printf("Printing the sorted array:\n");
  for (i = 0; i < n; i++)
  {
     printf("%d\n", a[i]);
  }
  return 0;
}
