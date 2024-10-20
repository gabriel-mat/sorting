#include <stdio.h>

#define MAX_SIZE 1000

int main() {
  int array[MAX_SIZE];
  int size, min_value, min_position, swap;

  printf("array size > ");
  scanf("%d", &size);

  if (size < 1) {
    printf("the number of elements must be greater than 1!\n");
    return 0;
  }

  printf("complete the array > ");

  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // selection sort //

  for (int i = 0; i < size; i++) {
    min_position = i;
    min_value = array[min_position];

    for (int j = i + 1; j < size; j++) {
      if (array[j] < min_value) {
        min_value = array[j];
        min_position = j;
      }
    }

    swap = array[i];
    array[i] = min_value;
    array[min_position] = swap;
  }

  printf("sorted array > ");
  
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  printf("\n");
}