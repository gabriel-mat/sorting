#include <stdio.h>

#define MAX_SIZE 1000

int main() {
  int array[MAX_SIZE];
  int size, aux;

  printf("array size > ");
  scanf("%d", &size);

  if (size < 1) {
    printf("array size must be greater than 1\n");
    return 0;
  }

  printf("complete the array > ");

  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // bubble sort

  for (int i = 0, swap = 0; i < size; i++) {
    swap = 0;

    for (int j = 0; j < size - 1; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
        swap = 1;
      }
    }

    if (!swap)
      break;
  }

  printf("sorted array > ");

  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  printf("\n");

  return 0;
}