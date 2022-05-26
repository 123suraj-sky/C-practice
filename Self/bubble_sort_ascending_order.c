/* Bubble sort code */
#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap; // array[100] for stroing values entered by the user, n for number of elements wants to enter in the array, c is used for stroing values in array position, d is used for arranging values in array, swap is used to swap numbers in order to arrange it in ascending order

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < n - 1; c++)
  {
    for (d = 0; d < n - c - 1; d++)
    {
      if (array[d] > array[d + 1]) /* For decreasing order use '<' instead of '>' */
      {
        swap = array[d];
        array[d] = array[d + 1];
        array[d + 1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  return 0;
}